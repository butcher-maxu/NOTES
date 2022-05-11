#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    cin >> n;
    if (n < 2)
        ans = 1;
    else if (n == 2 || n == 3)
    {
        ans = n;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i; j < n && j >= i; j++)
            {
                for (int k = n; k <= n && k >= j; k--)
                {
                    if (k+j+i==n) ans++;
                    if(k+j+i<n) break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}