#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc073/tasks/abc073_c
// 300点

//Aに対して、これまで出現したかどうかを探索するようなやり方では間に合わない。
//要するに、最悪の場合10^9の範囲を10^5回探索は出来ない。
//Sortすることで、同じ数は隣にしか存在しえないので探索出来る

int main()
{
    int n;
    cin >> n;
    vector<long long> b(n);
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b[i] = a;
    }
    sort(b.begin(), b.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == b[i + 1])
        {
            count += 2;
            i += 1;
        }
    }
    cout << n - count << endl;
}