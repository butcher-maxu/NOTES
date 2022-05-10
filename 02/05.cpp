#include<bits/stdc++.h> 

using namespace std;
bool op(int n)//质数判断
{
   for(int i=2;i<=sqrt(n);i++)
   {
       if(n%i==0) return false;
   }
   return true;
}

int main( )
{
    int n;
    bool flag=1;
    cin>>n;
    for(int a=2;a<n-3;a++)
    {
        if(op(a)&&op(a+2)&&op(a+4))
        {
            cout<<a<<" "<<a+2<<" "<<a+4<<endl;
            flag=0;
        }
    }
    if(flag) cout<<0<<endl;
    return 0;
}