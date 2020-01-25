#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc053/tasks/abc053_b
// 200点

int main()
{
    string s;
    cin >> s;
    //文字列の先頭から見て最初に出てくるAと文字列の後ろから見て最初にでてくるZのあいだが求める文字列

    int begin;
    int end;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == 'A') //前から調べる
        {
            begin = i;
            break;
        }
    }
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[s.length() - i - 1] == 'Z') //後ろから調べる。文字列の末尾のindexはs.length()-1である。
        {
            end = i;
            break;
        }
    }
    cout << s.length() - begin - end << endl;
}