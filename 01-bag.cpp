#include <stdio.h>
#include <algorithm>

using namespace std;

int N, V;
int dp[1010][1010];
int w[1010], v[1010];

int main()
{
    scanf("%d %d", &N, &V);
    for (int i = 0; i < 1010; i++)
        dp[0][i] = dp[i][0] = 0;
    for (int i = 1; i <= N; i++)
        scanf("%d %d", v + i, w + i);
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= V; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= v[i])
                dp[i][j] = max(dp[i - 1][j - v[i]] + w[i], dp[i][j]);
        }
    printf("%d ", dp[N][V]);
    return 0;
}