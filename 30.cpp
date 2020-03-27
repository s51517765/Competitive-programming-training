#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc075/tasks/abc075_b
// 200点

//問題文の通りに実装するだけ

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    vector<string> a(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#')
                a[i] += '#';
            else
            {
                int c = 0;
                if (i + 1 < h && s[i + 1][j] == '#')
                    c += 1;
                if (i - 1 >= 0 && s[i - 1][j] == '#')
                    c += 1;
                if (j + 1 < w && s[i][j + 1] == '#')
                    c += 1;
                if (j - 1 >= 0 && s[i][j - 1] == '#')
                    c += 1;
                if (i + 1 < h && j + 1 < w && s[i + 1][j + 1] == '#')
                    c += 1;
                if (i - 1 >= 0 && j + 1 < w && s[i - 1][j + 1] == '#')
                    c += 1;
                if (i + 1 < h && j - 1 >= 0 && s[i + 1][j - 1] == '#')
                    c += 1;
                if (i - 1 >= 0 && j - 1 >= 0 && s[i - 1][j - 1] == '#')
                    c += 1;
                a[i] += to_string(c);
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        cout << a[i] << endl;
    }
}