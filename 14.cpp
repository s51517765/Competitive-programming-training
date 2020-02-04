#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc062/tasks/abc062_b
// 200点

int main()
{
    int h, w;
    cin >> h >> w;
    string head = ""; //額縁の上と下
    vector<string> a(h);
    for (int i = 0; i < h; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < w + 2; i++)
        head += "#";
    cout << head << endl;
    for (int i = 0; i < h; i++)
        cout << "#" << a[i] << "#" << endl;
    cout << head << endl;
}