#include <bits/stdc++.h>
using namespace std;
#define EPS (1e-10)
#define equals(a, b) (fabs(a - b) < EPS)
//表示点的结构体
struct Point
{
    double x, y;
    Point() {}
    Point(double, double) : x(x), y(y) {}
};

//表示向量的结构体
typedef Point Vector;
double norm(Vector a) //向量的大小
{
    return a.x * a.x + a.y * a.y;
}
double abs(Vector a)
{
    return sqrt(norm(a));
}