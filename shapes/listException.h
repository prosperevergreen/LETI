//
// Created by Prosper Evergreen on 17.11.2019.
//

#ifndef SHAPES_LISTEXCEPTION_H
#define SHAPES_LISTEXCEPTION_H

#include <string>
#include <utility>
#include <exception>
using namespace std;


class ListException {
public:
    ListException() = default;
    inline explicit ListException(string msg)
            : msg_(msg) {}

    string what() const {
        return msg_;
    }

protected:
    string msg_;
};

#endif //SHAPES_LISTEXCEPTION_H
