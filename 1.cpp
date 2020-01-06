#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// https://atcoder.jp/contests/abc044/tasks/abc044_b

int main()
{
    int solve(); //成立しない点がでた瞬間Noになるためreturnして終了したい。
    {
        string w;
        cin >> w;
        sort(w.begin(), w.end());
        bool flag = false; //同じ文字のペアを確認する
        for (int i = 0; i < w.length(); i++)
        //for(auto x:w)
        {
            if (w[i] == w[i + 1]) //ペアができれば
            {
                flag = !flag;
            }
            else if (!flag) //次の英字に進んだときはペアが完成していなければ
            {
                cout << "No" << endl;
                return 0;
            }
            else //次の英字に進んだときペアをリセットする
            {
                flag = false;
            }
        }
        cout << "Yes" << endl; //最後の文字まで確認出来たら
        return 0;
    }
    solve();
}