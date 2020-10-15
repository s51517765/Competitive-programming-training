#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

// https://atcoder.jp/contests/abc075/tasks/abc075_c
// 300点

//DFSですべての経路を探索
//1つの辺を削除したときすべての頂点がつながらないものがあるとき、それを橋とよぶ

bool visited[50];
int cnt = 0; //visitedの数を数える
int ans = 0;
bool g[50][50]; //頂点がつながっている頂点を示す
int n, m;
int a[50], b[50]; //i番目の辺

int dfs(int now)
{
  visited[now] = true;
  for (int i = 0; i < n; i++)
    if (g[now][i] == true && !visited[i]) //次の頂点はつながっていて&&訪問済みでないことが必要
      dfs(i);

  return 0;
}

int main()
{
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }

  //gについて、ひとつづつ辺を削除したとき連結かどうかを確認
  for (int i = 0; i < m; i++)
  {
    g[a[i]][b[i]] = g[b[i]][a[i]] = false;
    for (int j = 0; j < n; ++j)
      visited[j] = false;
    dfs(0);
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
      if (visited[i])
        cnt += 1;
    }
    if (cnt != n)
      ans += 1;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }

  cout << ans << endl;
  return 0;
}
