#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc065/tasks/abc065_b
// 200点

//一度通ったところに戻ってしまったら、そのあとは同じルートを再現するだけなので「解なし」となる

int n;
int a[100001]; //ボタン
int b[100001]; //通ったところ

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) //ボタンの番号と配列のインデックスを一致させると考えやすい
    {
        cin >> a[i];
    }

    int j = 1;
    int count = 0;

    while (b[j] == 0)
    {
        count += 1;
        if (a[j] == 2)
        {
            cout << count << endl;
            return 0;
        }

        b[j] = 1; //通ったところ
        j = a[j];
    }
    cout << -1 << endl;
}