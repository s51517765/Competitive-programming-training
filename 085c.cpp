#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

// https://atcoder.jp/contests/abc084/tasks/abc085_c
// 300点
int n, y;

int main()
{
  cin >> n >> y;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (10000 * i + 5000 * j + 1000 * (n - i - j) == y)
      {
        if (n - i - j >= 0)
        {
          cout << i << ' ' << j << ' ' << n - i - j << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}
