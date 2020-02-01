#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc059/tasks/abc059_b
// 200点

// aの倍数をbで割ったとき余りがcとなることがあるか？と言い換えられる

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i <= b; i++) //i<=100とかしても間に合うけど aの倍数をbで割ったとき余りは0～b-1を規則的に繰り返す
    {
        if ((a * i) % b == c)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}