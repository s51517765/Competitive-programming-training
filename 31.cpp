#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

// https://atcoder.jp/contests/abc075/tasks/abc077_b
// 200点

int main()
{
    long long n;
    cin >> n;
    n = sqrt(n); //整数にキャストしないとうまくいかない
    n = pow(n, 2);
    cout << n << endl;
}
