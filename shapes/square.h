//
// Created by Prosper Evergreen on 15/09/2019.
//

#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include "shapes.h"

using namespace std;


class Square : virtual public Shape {
public:
    Square(double sizeLen, Point centerPos = {0,0}, double origAngle = 0);

    ~Square();

    void move(Point neWpos) override;

    void rotate(double neWangle) override;

    void draw(ostream &out) override;

    void clear() override;


protected:

    void update(Point newPoint, double angle);

    Point getCenter();

    double getSize();

    double getAngle();

    double _size;
    Point _center;
    double _angle;
    Point _tl, _tr, _bl, _br;
};


#endif //SHAPES_SQUARE_H
