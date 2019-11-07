//
// Created by Prosper Evergreen on 05/10/2019.
//

#include "text.h"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

Text::Text(string text, int font, Point pos, double angle, string color){
    this->update(text,font, color, pos, angle);
};

Text::~Text() = default;

void Text::setText(string text) {
    _text = text;
};

string Text::getText() {
    return _text;
};

void Text::setColor(string color) {
    _color = color;
};

void Text::setFont(int font) {
    _font = font;
};

void Text::move(Point neWpos) {
    _posT = neWpos;
};

void Text::rotate(double neWangle) {
    _angleT = neWangle;
};

void Text::draw(ostream &out) {
    out << _text << endl;
    out << endl;
};

void Text::clear() {};

void Text::update(string text, int font, string color, Point newPoint, double angle) {
    this->clear();
    this->setText(text);
    this->setColor(color);
    this->setFont(font);
    this->move(newPoint);
    this->rotate(angle);
    this->draw(cout);
};