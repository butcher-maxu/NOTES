#include <bits/stdc++.h>

using namespace std;
int rec1[4], rec2[4];
bool rec_inter()
{
    //找不相交的，其他都相交
    if (rec1[3] >= rec2[1] || rec2[3] >= rec1[1])
        return false; 
    if (rec1[2] <= rec2[0] || rec2[2] > rec1[0])
        return false;
    if (rec1[0] == rec2[0] && rec1[1] == rec2[1] && rec1[2] == rec2[2] && rec1[3] == rec2[3])
        return false;
    if(rec1[0]>rec2[0]&&rec2[2]<rec1[2]&&rec1[1]>rec2[1]&&rec1[3]<rec2[3])
        return false;
    return true;
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> rec1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> rec1[i];
    }
    if(rec_inter())
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
