//
// Created by Prosper Evergreen on 17.11.2019.
//

#ifndef SHAPES_LISTEMPTYERROR_H
#define SHAPES_LISTEMPTYERROR_H

#include "listException.h"
using namespace std;


class ListEmptyError : public ListException {
public:
    inline explicit ListEmptyError(string msg)
            : ListException(msg) {}
};

#endif //SHAPES_LISTEMPTYERROR_H
