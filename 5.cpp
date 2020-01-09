#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc047/tasks/abc047_b
// 200点

//点（座標）に対して塗りつぶすエリアが１：１に対応することが分かると簡単

int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    bool v[w][h];

    for (int i = 0; i < w; i++) //bool falseで初期化
    {
        for (int j = 0; j < h; j++)
        {
            v[i][j] = false;
        }
    }

    int x, y, a;
    for (int i = 0; i < n; i++) //塗りつぶすところをtrueにしていく。すでにtrueであってもそのままでよい。
    {
        cin >> x >> y >> a;
        if (a == 1)
        {
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < h; j++)
                {
                    v[i][j] = true;
                }
            }
        }
        else if (a == 2)
        {
            for (int i = x; i < w; i++)
            {
                for (int j = 0; j < h; j++)
                {
                    v[i][j] = true;
                }
            }
        }
        else if (a == 3)
        {
            for (int i = 0; i < w; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    v[i][j] = true;
                }
            }
        }
        else
        {
            for (int i = 0; i < w; i++)
            {
                for (int j = y; j < h; j++)
                {
                    v[i][j] = true;
                }
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < w; i++) //塗りつぶしていないところを数える
    {
        for (int j = 0; j < h; j++)
        {
            if (!v[i][j])
                ans += 1;
        }
    }

    cout << ans << endl;
    return 0;
}