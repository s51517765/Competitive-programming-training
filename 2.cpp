#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

// https://atcoder.jp/contests/abc042/tasks/abc042_a
// 100点

// 簡単には 入力値をsortして {5 , 5 , 7} になっていればOKだが他の方法を考えてみた

int main()
{
    vector<int> x(3);
    vector<int> target{5, 7, 5};

    cin >> x[0] >> x[1] >> x[2];
    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        auto a = find(target.begin(), target.end(), x[i]);

        size_t index = distance(target.begin(), a); //見つかったらそのIndexを返す
        target[index] = -1;                         //そのIndexを-1に
    }
    if (accumulate(target.begin(), target.end(), 0) == -3) //Vectorの用の要素の和をとる #include <numeric>
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
