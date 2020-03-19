#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc071/tasks/abc071_b
// 200点

//ややこしい気もするが、単純に実装しても10^5の長さに対して英小文字26文字なので26 * 10^5 < O(10^6)で間に合う。

int main()
{
    string s;
    cin >> s;

    string abt = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < abt.size(); i++)
    {
        if (find(s.begin(), s.end(), abt[i]) == s.end()) //見つからなかったら
        {
            cout << abt[i] << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}