//
// Created by Prosper Evergreen on 20/09/2019.
//

#include "SquareS.h"

SquareS::SquareS(double sizeLen, double _thickness, Point centerPos, double origAngle) : Square(sizeLen, centerPos,
                                                                                                     origAngle),
                                                                                              thickness(_thickness)
                                                                                              {
                                                                                                  this->update(centerPos, origAngle);
                                                                                              }

SquareS::~SquareS() = default;

void SquareS::clear(){}

void SquareS::move(Point neWpos){
    Square::move(neWpos);
    stl.x = _tl.x + thickness;
    stl.y = _tl.y;
    str.x = _tr.x + thickness;
    str.y = _tr.y;
    sbr.x = _br.x + thickness;
    sbr.y = _br.y;
};

void SquareS::rotate(double neWangle){
    Square::rotate(neWangle);
    stl.RotatePoint(_tl, 45 + _angle);
    str.RotatePoint(_tr, 45 + _angle);
    sbr.RotatePoint(_br, 45 + _angle);
};

void SquareS::draw(ostream &out){
    out << stl.x << "," << stl.y << "|---|" << str.x << "," << str.y << endl;
    out << "    " << "|---|" << sbr.x << "," << sbr.y << endl;
    out << endl;
};


void SquareS::update(Point newPoint, double angle){
    this->clear();
    this->move(newPoint);
    this->rotate(angle);
    this->draw(cout);
};