#include "Point.hpp"

float det (Point first, Point second)
{
    float tmp1;
    float tmp2;

    tmp1 = first.getX().toFloat() * second.getY().toFloat();
    tmp2 = first.getY().toFloat() * second.getX().toFloat();
    return (tmp1 - tmp2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point v1 = b - a;
    Point v2 = c - a;

    float t;
    float w;
    if (det(v1, v2) == 0)
        return 0;
    t = (det(point, v2) - det(a, v2))/det(v1, v2);
    w = - (det(point, v1) - det(a, v1))/det(v1, v2);
    if (t > 0 && w > 0 && (t + w) < 1)
        return 1;
    return 0;
}
