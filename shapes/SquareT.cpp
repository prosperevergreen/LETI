//
// Created by Prosper Evergreen on 05/10/2019.
//

#include "SquareT.h"

SquareT::SquareT(double sizeLen, const string text, int font, Point centerPos, double origAngle,
                 string color) : Square(sizeLen, centerPos, origAngle),
                                                          Text(text, font, centerPos, origAngle, color) {}

SquareT::~SquareT() = default;

void SquareT::clear(){}

void SquareT::move(Point neWpos){
    Square::move(neWpos);
    Text::move(neWpos);
};

void SquareT::rotate(double neWangle){
    Square::rotate(neWangle);
    Text::rotate(neWangle);
};

void SquareT::draw(ostream &out){
    Square::draw(out);
    Text::draw(out);
};

void SquareT::update(const Point centerPos, string text, int font, double origAngle, string color){
    Square::update(centerPos, origAngle);
    Text::update(text, font, color, centerPos, origAngle);
};