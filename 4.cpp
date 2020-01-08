#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc045/tasks/abc045_b
// 200点

int main()
{
    string card_a;
    string card_b;
    string card_c;
    vector<int> j = {0, 0, 0}; //各文字列のカウンター

    cin >> card_a >> card_b >> card_c;

    char tmp = card_a[0];
    while (true)
    {
        if (tmp == 'a') //charは'' シングルクォート
        // C言語ではシングルクォーテーション「'」とダブルクオーテーション「"」は役割が異なります。
        //シングルクォーテーションで囲まれた文字は文字リテラル、ダブルクオーテーションで囲まれた文字列は文字列が格納されたアドレスを表します。
        //なお、「'」は１文字を表すためだけに利用することができます。また、「"」の文字列の後には「NULL」が付け加えられます。
        {
            tmp = card_a[j[0]];
            //if (j[0] == card_a.length()) //文字列のカウンターがENDになったらという条件でもOK
            if (tmp == '\0') //charの末尾にはNULL文字があるのでこれが来たらEND
            {
                cout << "A" << endl;
                break;
            }
            j[0] += 1;
        }
        else if (tmp == 'b')
        {
            tmp = card_b[j[1]];
            //if (j[1] == card_b.length())
            if (tmp == '\0')
            {
                cout << "B" << endl;
                break;
            }
            j[1] += 1;
        }
        else
        {
            tmp = card_c[j[2]];
            // if (j[2] == card_c.length())
            if (tmp == '\0')
            {
                cout << "C" << endl;
                break;
            }
            j[2] += 1;
        }
    }
}