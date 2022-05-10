// #include <iostream>
// #include <string>
// #include<cmath>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll n;
//     int countA = 0, countB = 0;
//     string A, B;
//     scanf("%lld", &n);
//     cin >> A >> B;
//     char arrA[n], arrB[n];
//     int lenA = A.length(), lenB = B.length();
//     //暴力必死
//     for (ll i = 0; i < n; i++)
//     {
//         arrA[i] = A[i % lenA];
//         arrB[i] = B[i % lenB];
//         if ((arrA[i] == 'R' && arrB[i] == 'P') || (arrA[i] == 'P' && arrB[i] == 'S') || (arrA[i] == 'S' && arrB[i] == 'R')) //乙赢的情况countA++
//             countA++;
//         else if ((arrA[i] == 'R' && arrB[i] == 'S') || (arrA[i] == 'P' && arrB[i] == 'R') || (arrA[i] == 'S' && arrB[i] == 'P')) //甲赢 countB++
//             countB++;
//     }
//     printf("%d %d", countA, countB);
//     // cout<<countA<<" "<<countB<<endl;
//     return 0;
// }

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int Gcd(int x, int y) //最大公约数
{
    return (y == 0) ? x : Gcd(y, x % y);
}

int Lcm(int x, int y) //最小公倍数
{
    return x / Gcd(x, y) * y;
}

int main()
{
    int n, lcm, resultA = 0, resultB = 0;
    string A, B;
    scanf("%d", &n);
    cin >> A >> B;
    char arrA[n], arrB[n];
    int lenA = A.length(), lenB = B.length();
    lcm = Lcm(lenA, lenB); //循环次数

    // cout<<lcm<<endl;
    int countA = 0, countB = 0, modTA = 0, modTB = 0;
    for (int i = 0; i < lcm; i++)
    {
        arrA[i] = A[i % lenA];
        arrB[i] = B[i % lenB];
        if ((arrA[i] == 'R' && arrB[i] == 'P') || (arrA[i] == 'P' && arrB[i] == 'S') || (arrA[i] == 'S' && arrB[i] == 'R')) //乙赢的情况countT++
            countA++;
        else if ((arrA[i] == 'R' && arrB[i] == 'S') || (arrA[i] == 'P' && arrB[i] == 'R') || (arrA[i] == 'S' && arrB[i] == 'P')) //甲赢 countB++
            countB++;
    }
    // cout << countA << " " << countB << endl;

    if (n % lcm != 0)
    {
        int mod = n % lcm;
        for (int i = 0; i < mod; i++)
        {
            if ((arrA[i] == 'R' && arrB[i] == 'P') || (arrA[i] == 'P' && arrB[i] == 'S') || (arrA[i] == 'S' && arrB[i] == 'R')) //乙赢的情况countT++
                modTA++;
            else if ((arrA[i] == 'R' && arrB[i] == 'S') || (arrA[i] == 'P' && arrB[i] == 'R') || (arrA[i] == 'S' && arrB[i] == 'P')) //甲赢 countB++
                modTB++;
        }
    }
    resultA = (n / lcm) * countA + modTA;
    resultB = (n / lcm) * countB + modTB;
    cout << resultA << " " << resultB << endl;

    return 0;
}