//
// Created by Prosper Evergreen on 20/09/2019.
//

#ifndef SHAPES_SHADES_H
#define SHAPES_SHADES_H

#include "square.h"

class SquareS : public Square {
public:
    SquareS(double sizeLen, double _thickness, Point centerPos = {0,0}, double origAngle = 0);

    ~SquareS();

    void move(Point neWpos) override ;

    void rotate(double neWangle) override ;

    void draw(ostream &out) override ;

    void clear() override ;

private:
    void update(Point newPoint, double angle);
//    void update(Point centerPos, double sizeLen, double origAngle);
    double thickness;
    Point stl, str, sbr;
};


#endif //SHAPES_SHADES_H
