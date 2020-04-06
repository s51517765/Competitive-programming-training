#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

// https://atcoder.jp/contests/abc078/tasks/abc078_b
// 200点

int main()
{
    int x, y, z;
    int ans;
    cin >> x >> y >> z;

    cout << (x - z) / (y + z) << endl;
}
