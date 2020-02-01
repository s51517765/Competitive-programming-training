#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc059/tasks/abc059_b
// 200点

//数値として比較しようとすると扱えない大きさの数値であるので文字列として考える
//桁数が違えば、長いほうが大きい

//その１：桁数が同じならば、先頭から順番に比較して違う数字になるまで見る
/*
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;

    if (a.length() > b.length())
    {
        cout << "GREATER" << endl;
        return 0;
    }
    else if (a.length() < b.length())
    {
        cout << "LESS" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[0] > b[0])
            {
                cout << "GREATER" << endl;
                return 0;
            }
            else if (a[0] < b[0])
            {
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl; //最後の桁までみても同じとき
        return 0;
    }
}
*/

//その２：桁が同じときは辞書順を評価するという方法がある
//文字列は辞書順で、数字は小さいほうが早い
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    if (a.length() > b.length())
        cout << "GREATER" << endl;
    else if (a.length() < b.length())
        cout << "LESS" << endl;
    else
    {
        if (a > b)
            cout << "GREATER" << endl;
        else if (a < b)
            cout << "LESS" << endl;
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}