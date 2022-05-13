#include <bits/stdc++.h>

using namespace std;

double EPS = 1e-10;

double add(double a, double b) //考虑误差的加法运算
{
    if (abs(a + b) < EPS * (abs(a) + abs(b)))
        return 0;
    return a + b;
}

struct P
{
    double x, y;
    P() {}
    P(double x, double y) : x(x), y(y) {}
    P operator+(P p)
    {
        return P(add(x, p.x), add(y, p.y));
    }
    P operator-(P p)
    {
        return P(add(x, -p.x), add(y, -p.y));
    }
    P operator*(double d)
    {
        return P(x * d, y * d);
    }
    double dot(P p) //内积
    {
        return add(x * p.x, y * p.y);
    }
    double det(P p) //外积
    {
        return add(x * p.y, -y * p.x);
    }
};

//判断点q是否在线段P1-P2上
bool on_seg(P p1, P p2, P q)
{
    return (p1 - q).det(p2 - q) == 0 && (p1 - q).dot(p2 - q) <= 0;
}