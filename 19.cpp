#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc064/tasks/abc064_c
// 300点

int main()
{
    int n;
    cin >> n;

    vector<bool> a(8, false); //クラスを8個用意してfalseで初期化
    int over_3200 = 0;        //好きに選べる人をカウントする変数
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp >= 3200)
            over_3200 += 1;  //好きに選べる人
        a[tmp / 400] = true; //クラスに人がいたら
    }
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i])
            count += 1; //一人以上いるクラスをカウントする
    }
    int min = count;
    if (count == 0)
        count = 1; //全員3200以上の場合countは0になる。このときMinは1
    int max = count + over_3200;
    if (max > 8) //クラスの数を超えたら
        max = 8;
    cout << min << " " << max << endl;
}