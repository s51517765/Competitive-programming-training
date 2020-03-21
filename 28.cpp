#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc072/tasks/abc072_b
// 200点

int main()
{
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); i += 2) //2ごと
    {
        ans += s[i];
    }
    cout << ans << endl;
}