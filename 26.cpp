#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc070/tasks/abc070_b
// 200点

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans;
    ans = min(b, d) - max(a, c);
    if (ans < 0)
        ans = 0;
    cout << ans << endl;
}