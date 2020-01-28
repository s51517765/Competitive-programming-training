#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc054/tasks/abc054_b
// 200点

int solve_oder()
{
    int max = 0;
    int store_n, store_m;
    for (int n = 1; n <= 50; n++)
    {
        for (int m = 1; m <= n; m++) //m<=n であることから
        {
            if (((n - m + 1) * (n - m + 1) * m * m) > max)
            {
                max = (n - m + 1) * (n - m + 1) * m * m;
                store_n = n;
                store_m = m;
            }
        }
    }
    cout << "max = " << max << endl;   // max = 422500 最大でもこの程度で十分間に合う。AtCorderでは大体 2x10^6 ぐらいまでOK。
    cout << "n = " << store_n << endl; // n = 50
    cout << "m = " << store_m << endl; // m = 25
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<string> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    bool flag;

    //4重ループになるが間に合うのか？
    //  solve_oder();

    for (int i = 0; i < n - m + 1; i++)
    {
        for (int j = 0; j < n - m + 1; j++)
        {
            flag = true;
            for (int k = 0; k < m; k++)
            {
                for (int l = 0; l < m; l++)
                {
                    if (a[i + k][j + l] != b[k][l])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
