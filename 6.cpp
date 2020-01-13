#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc048/tasks/abc048_b
// 200点

int main()
{
    // a以上b以下でxで割り切れるモノの数は？
    //a~bまでの整数cについて割り切れるかどうか？（c%==0）を考えることと同じであるが、
    //10の18乗のオーダーでは間に合わない、ということであろう。
    //a~bまでの整数cについて割り切れるモノの数は、1～aの整数についてxで割り切れるモノの数と1~bの整数についてxで割り切れるモノの数の差
    //ある整数cについてxで割り切れるモノの数は、cがxで割り切れるかどうかにかかわらず(int)c/x。
    //また条件からintではオーバーフローする。
    //またaがxで割り切れるときは+1が必要

    long long a, b, x;
    cin >> a >> b >> x;
    long long ans;

    ans = b / x - a / x;
    if (a % x == 0)
        ans += 1;
    cout << ans << endl;
}