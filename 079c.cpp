#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

// https://atcoder.jp/contests/abc079/tasks/abc079_c
// 300点

int main()
{
  int line, a, b, c, d;
  cin >> line;
  a = line / 1000;
  b = (line / 100) % 10;
  c = (line / 10) % 10;
  d = line % 10;

  for (int i = 0; i < 8; i++)
  {
    char pm[3] = {'-', '-', '-'};
    int tmp = a;
    if ((i & 1) != 0)
    {
      tmp += b;
      pm[0] = '+';
    }
    else
      tmp -= b;
    if ((i & 2) != 0)
    {
      tmp += c;
      pm[1] = '+';
    }
    else
      tmp -= c;
    if ((i & 4) != 0)
    {
      tmp += d;
      pm[2] = '+';
    }
    else
      tmp -= d;
    if (tmp == 7)
    {
      cout << a << pm[0] << b << pm[1] << c << pm[2] << d << "=7" << endl;
      return 0;
    }
  }
}
