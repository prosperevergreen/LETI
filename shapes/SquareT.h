//
// Created by Prosper Evergreen on 05/10/2019.
//

#ifndef SHAPES_SQUARET_H
#define SHAPES_SQUARET_H

#include "square.h"
#include "text.h"
#include <string>

class SquareT: public Square, public Text{
public:
    SquareT(double sizeLen, const string text, int font, Point centerPos = {0,0}, double origAngle = 0, const string color = "black");

    ~SquareT();

    void move(Point neWpos);

    void rotate(double neWangle);

    void draw(ostream &out);

    void clear();

protected:
    void update(Point centerPos, string text, int font, double origAngle, string color);
};


#endif //SHAPES_SQUARET_H
