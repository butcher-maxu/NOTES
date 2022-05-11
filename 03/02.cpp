#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    ios::sync_with_stdio(false);
    int n,k,w;
    cin>>n>>k>>w;
    int ans=1;
    int cnt=3*w;
    while (cnt--)
    {
        ans*=k;
        k--;
    }
    cout<<ans;
    


    return 0;
}