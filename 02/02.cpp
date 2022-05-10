
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //1虽然ios::sync_with_stdio对cin有加速所用，但是还是没有scanf的速度快
    //2ios::sync_with_stdio(false)不可以与scanf混用，否则会造成异常。
    ios::sync_with_stdio(false);
    int x, y;
    cin >> x >> y;
    int cnt = 1;
    while (true)
    {
        if (cnt % 2 == 1)
        {
            if (x >= 2 && y >= 2)
            {
                x -= 2;
                y -= 2;
                cnt++;
            }
            else if (x == 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
                cnt++;
            }
            else if (y >= 22)
            {
                y -= 22;
                cnt++;
            }
            else
            {
                cout << "gqs" << endl;
                break;
            }
        }
        else
        {
            if (y >= 22)
            {
                y -= 22;
                cnt++;
            }
            else if (x >= 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
                cnt++;
            }
            else if (x >= 2 && y >= 2)
            {
                x -= 2;
                y -= 2;
                cnt++;
            }
            else
            {
                cout << "xmg" << endl;
                break;
            }
        }
    }

    return 0;
}