#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

// https://atcoder.jp/contests/abc054/tasks/abc054_c
// 300点

vector<int> s[8]; //四角括弧[] ？

int dfs(int p, vector<int> t, int &count, int n) //現在地、訪問済み点の配列、たどり着けた経路の数(参照渡し)、頂点の数
{
    for (int i = 0; i < s[p].size(); i++) //現在地からいける点をすべて見る
    {
        if (t[s[p][i]] == 0) //訪問済みでなければ
        {
            t[s[p][i]] = 1; //訪問済みにして

            int sum = accumulate(t.begin(), t.end(), 0);
            if (sum == n) //訪問済み数が頂点の数と一致したら
            {
                count += 1;
                //   cout << count << endl;
            }

            //  cout << p << " ";
            //  for (int i = 0; i <= n; i++)
            //      cout << t[i];
            //  cout << endl;

            dfs(s[p][i], t, count, n); //すべて訪問済みでなければさらに再帰的に見る

            t[s[p][i]] = 0; //直前の点を戻して
        }
    }

    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        s[a].push_back(b);
        s[b].push_back(a);
    }

    /* 入力例2
s[] =
1) 3
2) 7
3) 1 4
4) 3 5 6
5) 4 6
6) 4 5 7
7) 2 6
*/

    vector<int> t(8 + 1, 0); //通過したか？の状態を0で初期化
    int count = 0;           //通過した頂点の数
    t[1] = 1;                //1からスタートなので1は訪問済み
    int ans;
    ans = dfs(1, t, count, n); //再帰的に
    cout << ans << endl;
}