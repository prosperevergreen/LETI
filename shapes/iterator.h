#ifndef SHAPES_LIST_IT_H
#define SHAPES_LIST_IT_H

#include "list.h"

template<typename T>
struct Node;

template<typename T>
class List;

template<typename T>
class ListIterator {
    Node<T> *head;
    Node<T> *current;
    T *default_value;
    bool is_end;
public:
    explicit ListIterator(const List<T> &l, bool is_end=false);
    T *operator*();
    ListIterator<T> operator++();
    bool operator==(const ListIterator<T> &other);
    bool operator!=(const ListIterator<T> &other);
    const ListIterator<T> operator++(int);//postfix
};

template<typename T>
ListIterator<T>::ListIterator(const List<T> &l, bool end_) {
    head = l.head;
    current = l.head;
//    default_value = new T();
    is_end = end_;
}

template<typename T>
ListIterator<T> ListIterator<T>::operator++() {
    auto tmp = *this;
    if(current->next){
        current = current->next;
        return tmp;
    } else {
        is_end = true;
        auto l = List<T>(default_value);
        return ListIterator<T>(l, true);
    }
}

template<typename T>
const ListIterator<T> ListIterator<T>::operator++(int) {
    if(current->next){
        current = current->next;
        return *this;
    } else {
        is_end = true;
        auto l = List<T>(default_value);
        return ListIterator<T>(l, true);
    }
}

template<typename T>
T *ListIterator<T>::operator*() {
    if(is_end)
        return default_value;
    return current->data;
}

template<typename T>
bool ListIterator<T>::operator==(const ListIterator<T> &other) {
    return (head==other.head && is_end == other.is_end);
}

template<typename T>
bool ListIterator<T>::operator!=(const ListIterator<T> &other) {
    return !(head==other.head && is_end == other.is_end);
}


#endif // SHAPES_LIST_H