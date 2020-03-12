#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc069/tasks/abc069_b
// 200点

int main()
{
    string s;
    string ans = "";
    cin >> s;
    int l = s.length();

    cout << s.substr(0, 1) << l - 2 << s.substr(l - 1) << endl;
}