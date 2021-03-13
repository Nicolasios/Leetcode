#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 1010;
int f[N];

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    memset(f, 0, sizeof(f));
    int v, w, s;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &v, &w, &s);
        if (s != 0)
        { // 是多重背包 / 01背包（多重背包特殊情况）
            if (s == -1)
                s = 1;               // 多重背包特殊情况 s = 1
            int num = min(s, m / v); //节省1
            for (int k = 1; num > 0; k <<= 1)
            { // <<=是左移操作
                if (k > num)
                    k = num; // 注意这里和for循环的结束条件，可以减少代码量
                num -= k;
                for (int j = m; j >= v * k; j--)
                { //从大到小枚举
                    f[j] = max(f[j], f[j - v * k] + w * k);
                }
            }
        }
        else
        { // 完全背包，需要从小到大枚举
            for (int j = v; j <= m; j++)
            {
                f[j] = max(f[j], f[j - v] + w);
            }
        }
    }
    printf("%d\n", f[m]);
    return 0;
}