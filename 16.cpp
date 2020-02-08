#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc051/tasks/abc051_c
// 300点

int debug(string ans, int sx, int sy, int tx, int ty)
{
    sx += 1000; //vectorに記録するためにオフセットする
    sy += 1000;
    tx += 1000;
    ty += 1000;

    vector<vector<int>> vec(2001, vector<int>(2001)); //0で初期化されている

    cout << "[" << sx << "," << sy << "]" << endl; //start位置

    for (int i = 0; i < ans.length(); i++)
    {
        if (ans[i] == 'U')
            sy += 1;
        else if (ans[i] == 'D')
            sy -= 1;
        else if (ans[i] == 'R')
            sx += 1;
        else
            sx -= 1;
        cout << "[" << sx << "," << sy << "]" << endl;
        if (i != ans.length() - 1) //最後は除く
        {
            if (vec[sx][sy] == 1 && !(sx == tx && sy == ty)) //目標地点は除く
            {
                cout << "NG" << endl;
                return 0;
            }
        }
        vec[sx][sy] = 1;
    }
    cout << "OK" << endl;
    return 0;
}

int main()
{
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    int dx, dy;
    dx = tx - sx;
    dy = ty - sy;

    string ans = "";

    for (int i = 0; i < dy; i++)
        ans += "U";
    for (int i = 0; i < dx; i++)
        ans += "R";
    for (int i = 0; i < dy; i++)
        ans += "D";
    for (int i = 0; i < dx; i++)
        ans += "L";
    ans += "LU";
    for (int i = 0; i < dy; i++)
        ans += "U";
    for (int i = 0; i < dx; i++)
        ans += "R";
    ans += "RDRD";
    for (int i = 0; i < dy; i++)
        ans += "D";
    for (int i = 0; i < dx; i++)
        ans += "L";
    ans += "LU";

    cout << ans << endl;

    //  debug(ans, sx, sy, tx, ty); //テストコード
}