#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc043/tasks/abc043_b
// 200点

int main()
{
    string s;
    cin >> s;
    string t;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'B')
        {   //size()のかわりにlength()でも同じ
            t.resize(t.size() - 1); //サイズを一つ小さくすることで最後の1文字を削る
        }
        else
        {
            t.push_back(s[i]);
        }
    }
    cout << t << endl;
    return 0;
}
