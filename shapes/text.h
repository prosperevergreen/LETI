//
// Created by Prosper Evergreen on 05/10/2019.
//

#ifndef SHAPES_TEXT_H
#define SHAPES_TEXT_H

#include "shapes.h"
#include <string>


class Text : virtual public Shape {
public:
    Text(string text, int font, Point pos = {0, 0}, double angle = 0.0, string color = "black");
    ~Text();

    void setText(string text);

    string getText();

    void setColor(string color);

    void setFont(int font);

    void move(Point neWpos) override;

    void rotate(double neWangle) override;

    void draw(ostream &out) override;

    void clear() override;

protected:

    void update(string text, int font, string color, Point newPoint, double angle);
    double _angleT;
    Point _posT;
    string _text;
    int _font;
    string _color;

};


#endif //SHAPES_TEXT_H
