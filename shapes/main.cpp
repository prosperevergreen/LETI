#include <iostream>
#include <string>
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

    Square *square1 = new Square(2);
    Shape *square2 = new Square(2, {0,5});
    Square square3(2, {0,8});
    SquareS a(2,1);
    a.move({1,1});
    a.rotate(45);
    Text word("hello", 4);

    SquareT q(4, "welcome", 5);


//    List<Shape> list(&square1);
//    list.push_front(&square2);
//    list.push_front(&square3);
//    list.push_front(&a);
//    list.push_front(&word);
//    list.push_front(&q);
//    list.deleteNode(&square1);


    List<Shape> list;
    list.push_front(square2);
    list.push_front(&square3);
    list.push_front(&a);
    list.push_front(&word);
    list.push_front(&q);
//    list.deleteNode(&square1);

//    list.print(cout);

//    List<int> l;
//    l.push_front(new int(1));
//    l.push_front(new int(2));
//    l.push_front(new int(3));
//    l.push_front(new int(4));



    for(auto it = list.begin(); it != list.end(); it++)
        std::cout << *(*it) << std::endl;


    return 0;
}