#include <iostream>
#include <algorithm>

using namespace std;

int dp[110];

//暴力解法
int main()
{
    int m, n;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        int v, w, s;
        cin >> v >> w >> s;
        for (int j = m; j >= v; --j)
        {
            for (int k = 1; k <= s && k * v <= j; ++k)
            {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }
    cout << dp[m];
}
