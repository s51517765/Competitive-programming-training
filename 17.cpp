#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath> //sqrt
using namespace std;

// https://atcoder.jp/contests/abc057/tasks/abc057_c
// 300点

int main()
{
    int n;
    cin >> n;
    long long ans = 10000000000;
    for (int i = 1; i <= sqrt(n); i++) //かけ合わせてnとなる数の組み合わせはその平方根までを見ればよい
    {
        int ans0 = 1;
        if (n % i == 0)
        {
            int tmp = n / i; //かけ合わせてnとなる数字の大きいほう。i <= sqrt(n)なので、かならず、i <= n/i

            while (tmp > 1) //何桁？  → 文字列に変換して長さを見る方法もある
            {
                tmp /= 10;
                ans0 += 1;
            }
            if (ans0 < ans) //これまでに求めたものとの比較して更新していたら
                ans = ans0;
            // ans = min((int)ans, ans0); minを使えばこのようにも書ける
        }
    }

    cout << ans << endl;
}