#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc068/tasks/abc068_b
// 200点

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i * 2 <= n)
    {
        i *= 2;
    }
    cout << i << endl;
}