#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

// https://atcoder.jp/contests/abc078/tasks/abc079_b
// 200点

//答えが32bitでは入らないので long long

int main()
{
    long long L[87];
    int n;
    L[0] = 2;
    L[1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        L[i] = L[i - 1] + L[i - 2];
    }
    cout << L[n] << endl;
}
