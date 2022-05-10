#include<bits/stdc++.h> 

using namespace std;

int a[100005];
int count(int a[],int n)
{
    int ans1=0,ans2=0;
    for (int i = 1 ; i < n; i++)
    {
        int t=a[i]-a[i-1];
        if(t>0) ans1+=t;
        else ans2+=t;
    }
    return max(ans1,abs(ans2));
}

int main( )
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<count(a,n)<<endl;

    return 0;
}