#include <bits/stdc++.h>

#define ll long long
#define mem(a,b) memset(a,b,sizeof(a))

const int mm=1e5+10;

using namespace std;

int main()
{
    int n;
    int a, b;
    int A[100005];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        A[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = a-1; j <b; j++)
        {
            A[j] = A[j] + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}