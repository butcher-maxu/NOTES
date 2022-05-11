#include <stdio.h>
#include <string.h>
char s[201];
int main()
{
    int i, len, hl, f;
    scanf("%s", s);

    len = strlen(s) - 1;
    hl = (len + 1) >> 1;
    for (i = hl - 1, f = 0; i >= 0 && !f; i--)
        f = s[i] == s[len - i] ? 0 : (s[i] > s[len - i] ? 1 : -1);
    if (f > 0)
    {
        s[len >> 1]--;
        for (i = len >> 1; i && s[i] > '9'; i--)
        {
            s[i] = '0';
            s[i - 1]--;
        }
        if (s[0] > '9')
        {
            s[0] = '1';
            len++;
            hl = (len + 1) >> 1;
            s[hl] = '0';
        }
    }
    for (i = 0; i < hl; i++)
        putchar(s[i]);
    for (i = hl - (len & 1); i >= 0; i--)
        putchar(s[i]);
    // putchar(10);

    return 0;
}