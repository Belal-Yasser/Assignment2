#include "distanceclass.h"


    mark::mark()
{
x = 0.0;
y = 0.0;
}

    mark::mark(float c, float d)
{
x = c;
y = d;
}

void mark::set_pointX(float k)
{
    x = k;
}

void mark::set_pointY(float m)
{
y =m;
}

    float mark::get_pointX() const
{
return x;
}

    float mark::get_pointY() const
{
return y;
}

void mark::show() const
{
cout << "(" << x << " , " << y << ")";
}

    float mark::distance(const mark k)
{
float N;
N = sqrt(pow(x - k.x, 2) + pow(y - k.y, 2));
return N;
}



