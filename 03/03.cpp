#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    cin >> s;

    while (s.size() > 0 && s[0] == '0') //去除前导0 000006576->6576
    {
        s.erase(0, 1); //从S中删除迭代器对0和1所表示的范围中的元素，返回1的元素
    }
    // cout << s << endl;
    if (s.size() == 0) // 0 并结束
    {
        cout << 0 << endl;
        return 0;
    }
    else if (s.size() == 1) // 个位数 并结束
    {
        cout << s << endl;
        return 0;
    }

    int len = s.length() / 2;
    for (int i = 0; i < len; i++)
    {
        int j = s.length() - i - 1;
        if (s[i] > s[j])
        {
            /* 前借位 */
            int k = j - 1;
            while (k >= 0 && s[k] == '0')
            {
                s[k--] = '9'; // k位置9 && k--
            }
            s[k]--; //前一位减1
            if (k == 0 && s[k] == 0)
            {
                s[i] = '9';
                s.erase(0, 1);
                // len = s.length() / 2;
                s[s.length()-1]='9';
                // i = -1;
                break;;
            }
        }
        s[j] = s[i];
    }
    cout << s << endl;

    return 0;
}
