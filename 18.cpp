#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath> //sqrt
using namespace std;

// https://atcoder.jp/contests/abc061/tasks/abc061_c
// 300点

int main()
{
    int n, k;
    cin >> n >> k;
    int c[100001];
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        c[a] += b; //入力aには重複もあることに注意
    }
    int tmp = 0;
    for (int j = 0; j < 100001; j++)
    {
        tmp += c[j];
        if (tmp >= k)
        {
            cout << j << endl;
            break;
        }
    }
}