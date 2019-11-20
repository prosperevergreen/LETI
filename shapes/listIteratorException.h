//
// Created by Prosper Evergreen on 17.11.2019.
//

#ifndef SHAPES_LISTITERATOREXCEPTION_H
#define SHAPES_LISTITERATOREXCEPTION_H

#include "listException.h"

using namespace std;


class ListInvalidIterator : public ListException {
public:
    inline ListInvalidIterator(string msg)
            : ListException(msg) {}
};

#endif //SHAPES_LISTITERATOREXCEPTION_H
