#include <iostream>
#include "shapes.h"
#include "square.h"
#include "SquareS.h"
#include "list.h"
#include "text.h"
#include "SquareT.h"

using namespace std;

int main()
{

    /* Start with the empty list */

    Square square1(2);
    Square square2(2, {0,5});
    Square square3(2, {0,8});
    SquareS squareS1(2,1);
    squareS1.move({1,1});
    squareS1.rotate(45);
    Text word("hello", 4);

    SquareT squareT1(4, "welcome", 5);


    List<Shape> list;
    list.push_front(&square1);
    list.push_front(&square2);
    list.push_front(&square3);
    list.push_front(&squareS1);
    list.push_front(&word);
    list.push_front(&squareT1);
    list.deleteNode(&square1);



    for(auto it = list.begin(); it != list.end(); it++)
        std::cout << *(*it) << std::endl;


    try {
        List<Shape> list2;

//    list2.deleteNode(&square1);
        for(auto it = list2.begin(); it != list.end(); it++)
            std::cout << *(*it) << std::endl;

    }
    catch(ListEmptyError &e)
    {
        std::cout << "Exception:" << e.what() << std::endl;
    }
    catch(ListInvalidIterator &e)
    {
        std::cout << "Exception:" << e.what() << std::endl;
    }
    catch(std::exception &e){
        std::cout << "Exception:" << e.what() << std::endl;
    }



    return 0;
}