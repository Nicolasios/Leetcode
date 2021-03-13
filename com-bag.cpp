#include <stdio.h>
#include <algorithm>

using namespace std;

int N, V; //N goods and capacity of V bag
int dp[1010];
int w[1010], v[1010]; //v[i]: the 体积 of good_i,w[i]:the i价值 of good_i

int main()
{
    scanf("%d %d", &N, &V);
    for (int i = 1; i <= N; i++)
        scanf("%d %d", v + i, w + i);
    for (int i = 0; i < V; i++)
        dp[i] = 0;
    for (int i = 1; i <= N; i++)
        for (int j = v[i]; j <= V; j++)
            dp[j] = max(dp[j], w[i] + dp[j - v[i]]);
    printf("%d ", dp[V]);
    return 0;
}