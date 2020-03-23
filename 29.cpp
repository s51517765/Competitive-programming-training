#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc074/tasks/abc074_b
// 200点

// abs(0-x) とabs(K-x)の小さいほうの和が答え

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int x[100];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        ans += min(abs(x[i]), abs(k - x[i])) * 2;
    }
    cout << ans << endl;
}