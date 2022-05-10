// 组合数学
#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
// #define LL long long
const int N = 10010, mod = 12520;
LL C(int n, int k)
{
    LL res = 1;
    for (int i = n, j = 1; j <= k; i--, j++)
    {
        res = res * i / j % mod;
    }
    return res;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[N];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    LL res = 1;
    for (int i = 0; i < m; i++)
    {
        if (n <= a[i])
            break;
        res = res * C(n, a[i]) % mod;
        n -= a[i];
    }

    cout << res << endl;

    return 0;
}