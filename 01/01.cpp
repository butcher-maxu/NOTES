#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define N 21001
ll a[N] = {}, b[N] = {};
struct op{
   int a, b;   
}s[N]; 
bool operator < (const op &a, const op &b){
    if (a.a == b.a) return a.b < b.b ;
    else return a.a < b.a;
}
set<op> p ;
int main(){
    ll n, h, m ;
    cin >> n >> h >> m;
    for(ll i = 1; i <= m; i++){
        ll a1,a2;
        cin >> a1 >> a2;
        if (a1 == a2) continue;
        if (a1 > a2) swap(a1,a2); 
        op f; f.a = a1, f.b = a2 ;
        p.insert(f);
    }
    for (set<op>::iterator i = p.begin(); i != p.end();i++){
        op f = *i;
        b[f.a + 1] = b[f.a + 1] - 1;
        b[f.b] = b[f.b] + 1 ;
    }
    for (ll i = 1;i <= n; i++){
        a[i] = b[i] + a[i - 1] ;
        cout << a[i] + h << endl;
    }
    return 0;
}























/*
int main()
{
    int n, h, f, a, b;
    cin >> n >> h >> f;
    int A[n];

    for (int j = 0; j < 20; j++)
    {
        A[j] = h;
    }

    for (int i = 0; i < f; i++)
    {
        cin >> a >> b;
        while(b-a>=2)
        {
            for(int c=a;c<b;c++)
            {
                A[c]--;
            }
        }
    }
    for (int k = 0; k < 20; k++)
    {
        cout<<A[k]<<endl;
    }
    return 0;
}
*/