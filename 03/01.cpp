#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;
    ll ans;
    if (n <= m)
    {
        ans = 1;
    }
    else
    {
        if (n % m == 0)
        {
            ans = n / m;
        }
        else
        {
            ans = (n / m) + 1;
        }
    }
    cout << ans;

    return 0;
}