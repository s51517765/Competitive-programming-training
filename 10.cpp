#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc055/tasks/abc055_b
// 200点

int main()
{
    long long n; //intでは足りない
    cin >> n;
    long long ans = 1; //intでは足りない
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans = ans % 1000000007;
    }
    cout << ans << endl;

    // 参考 https://ja.cppreference.com/w/cpp/language/types
    // int =2^32 ≒ 4.2x10^9 であることから単純に計算するとintの範囲をOverしてしまう。(16bitの実装もある)
    //10^9+7でわるとしても、割る前に2^32を超えてしまうとダメ
    // long long は2^64 となるのでOK。
}