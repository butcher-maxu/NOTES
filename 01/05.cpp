#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    int lenAC, lenAB, lenBC;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3;
    if (x3 < min(x1, x2) || x3 > max(x1, x3) || y3 < min(y1, y2) || y3 > max(y1, y2))
    {
        cout << "NO";
        return 0;
    }
    lenAB = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    lenBC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    lenAC = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    if (lenAB + lenBC - lenAC < 0.0001)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}