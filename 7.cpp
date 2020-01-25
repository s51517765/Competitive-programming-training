#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc051/tasks/abc051_b
// 200点

int main()
{
    int k, s;
    cin >> k >> s;
    //単純に考えるとx,y,zの3重ループであるが、x+y+z=sであることからループを1つ削減することを考えるのが典型パターン
    //z=s-x-yなので、これを満たす0<=z<=kがあるときこれが解の1つとなる。

    int ans = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            if (0 <= s - x - y && s - x - y <= k)
            {
                ans += 1;
            }
        }
    }

    cout << ans << endl;
}