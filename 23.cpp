#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc066/tasks/abc066_b
// 200点

// 後ろからj文字削除したとき新しい文字列が xyzxyz = xyz + xyz のようになっていること

int main()
{
    string s, s0;
    cin >> s0;
    for (int j = 1; j < s0.size(); j++)
    {
        s = s0.substr(0, s0.size() - j);

        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s.size() % 2 != 0) //偶数長さでなければ成立しない
                continue;
            if (s.substr(0, s.size() / 2) == s.substr(s.size() / 2))
            {
                cout << s.size() << endl;
                return 0;
            }
        }
    }
}