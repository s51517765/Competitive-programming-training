#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// https://atcoder.jp/contests/abc057/tasks/abc057_b
// 200点

int main()
{
    // 「ただし、一番近いチェックポイントが複数ある場合には、番号が最も小さいチェックポイントに移動することとします。」
    //と難しいことをいわれているような気もするが、番号の小さいものからみると、同じものは更新されないのでそのままでいい

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(m);
    vector<int> d(m);

    int I;
    int dist;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> c[j] >> d[j];
    }

    for (int i = 0; i < n; i++)
    {
        dist = 1000000000; //ありえない大きさで初期化
        for (int j = 0; j < m; j++)
        {
            if (abs(a[i] - c[j]) + abs(b[i] - d[j]) < dist)
            {
                dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
                I = j; //最短になったもののインデックスを記憶
            }
        }
        cout << I + 1 << endl; //配列のインデックスと問題のインデックスはずれている
    }
}