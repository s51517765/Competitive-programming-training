#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc063/tasks/abc063_b
// 200点

int main()
{
    // i番目とj番目を比較するが、組み合わせだけ（順列ではない）を比較すればよいので、j<iとなる。
    //また、iは0番は比較する相手がいないので1から

    string s;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
}