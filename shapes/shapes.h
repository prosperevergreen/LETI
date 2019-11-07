//
// Created by Prosper Evergreen on 15/09/2019.
//

#ifndef SHAPES_SHAPES_H
#define SHAPES_SHAPES_H

#include <string>

#include <iostream>

using namespace std;

struct Point { // a point
    double x;
    double y;

    Point() : x(0), y(0) {
    }

    Point(double x_, double y_) : x(x_), y(y_) {
    }

    void RotatePoint(Point around, double degAngle);
};


class Shape // An interface base class of shapes
{
public:
    virtual void move(Point neWpos) = 0;

    virtual void rotate(double neWangle) = 0;

    virtual void draw(ostream &out) = 0;

    virtual void clear () = 0;

    virtual ~Shape() {};
//
    friend ostream &operator<<(ostream &out, Shape &sh) {
        sh.draw(out);
        return out;
    };
};


#endif //SHAPES_SHAPES_H
