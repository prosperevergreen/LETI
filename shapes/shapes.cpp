//
// Created by Prosper Evergreen on 15/09/2019.
//

#include "shapes.h"
#include <cmath>


void Point::RotatePoint(Point around, double degAngle) {
    if ((int) degAngle % 360 != 0 && (degAngle - (int) degAngle == 0.0)) {
        double rad = degAngle * (M_PI / 180);
        Point rotpoint(0, 0);
        rotpoint.x = around.x + (this->x - around.x) * cos(rad) - (this->y - around.y) * sin(rad);
        rotpoint.y = around.y + (this->x - around.x) * sin(rad) + (this->y - around.y) * cos(rad);
        this->x = rotpoint.x;
        this->y = rotpoint.y;
    }
}