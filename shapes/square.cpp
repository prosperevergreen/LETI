//
// Created by Prosper Evergreen on 15/09/2019.
//

#include "square.h"


#include <cmath>
#include <iostream>
#include <string>

using namespace std;

Square::Square(double sizeLen, Point centerPos, double origAngle) : _center(centerPos), _size(sizeLen), _angle(origAngle) {
    this->update(centerPos, origAngle);
}

void Square::clear(){}

void Square::move(Point neWpos) {
    _center = neWpos;
    _tl.x = _center.x - _size / 2;
    _tl.y = _center.y + _size / 2;
    _tr.x = _center.x + _size / 2;
    _tr.y = _center.y + _size / 2;
    _bl.x = _center.x - _size / 2;
    _bl.y = _center.y - _size / 2;
    _br.x = _center.x + _size / 2;
    _br.y = _center.y - _size / 2;
}

void Square::rotate(double neWangle) {
    _angle = neWangle;
    _tl.RotatePoint(_center, _angle);
    _tr.RotatePoint(_center, _angle);
    _bl.RotatePoint(_center, _angle);
    _br.RotatePoint(_center, _angle);
}

void Square::draw(ostream &out) {
    out << _tl.x << "," << _tl.y << "|---|" << _tr.x << "," << _tr.y << endl;
    out << _bl.x << "," << _bl.y << "|---|" << _br.x << "," << _br.y << endl;
    out << endl;
}

void Square::update(Point newPoint, double angle) {
    this->clear();
    this->move(newPoint);
    this->rotate(angle);
    this->draw(cout);
}

Point Square::getCenter() {
    return _center;
}

double Square::getSize() {
    return _size;
}

double Square::getAngle() {
    return _angle;
}

Square::~Square() = default;