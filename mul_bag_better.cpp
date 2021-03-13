#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 2010;

int n, m; //n个物品，背包容量为m
int f[N];

int main()
{
    vector<pair<int, int>> goods;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int v, w, s;
        cin >> v >> w >> s;
        for (int k = 1; k <= s; k <<= 1)
        {
            s -= k;
            goods.push_back(make_pair<int, int>(v * k, w * k));
        }
        if (s > 0)
            goods.push_back(make_pair<int, int>(v * s, w * s));
    }
    for (auto good : goods)
        for (int j = m; j >= good.first; j--)
            f[j] = max(f[j], f[j - good.first] + good.second);
    for (auto good : goods)
        cout << "first:" << good.first << "  second:" << good.second << endl;
    cout << f[m] << endl;
    return 0;
}
