#ifndef distanceclass_h
#define distanceclass_h
#include <iostream>
#include <cmath>
using namespace std;


class mark
{
public:
    mark();
    mark(float, float);
        void set_pointY(float);
        void set_pointX(float);
    void show() const;
    float distance(const point);
        float get_pointY() const;
        float get_pointX() const;
    

private:
    float x;
    float y;
};


