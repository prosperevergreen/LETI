//
// Created by Prosper Evergreen on 17/09/2019.
//

#ifndef SHAPES_LIST_H
#define SHAPES_LIST_H

#include <iostream>
#include <string>
#include "shapes.h"
#include "iterator.h"
#include <cmath>


using namespace std;

// A linked list node
template<typename T>
struct Node {
    T *data;
    Node *next;
    Node *prev;

    Node(T *fig) : data(fig), next(nullptr), prev(nullptr) {}

    Node(T *fig, Node *elem) : data(fig), next(elem), prev(nullptr) {}

};

template<typename T>
class List {
    Node<T> *head;
    friend class ListIterator<T>;
public:
    List();

    List(T *head_);

    void push_back(T *new_data);
    void push_front(T *new_data);
    void deleteNode(T *del_data);
    void print(ostream &out);

    ListIterator<T> begin();
    ListIterator<T> end();

};


template<typename T>
List<T>::List() : head(nullptr) {}

template<typename T>
List<T>::List(T *head_) {
    head = new Node<T>(head_);
}

template<typename T>
void List<T>::push_back(T *new_data) {
    if (head) {
        Node<T> *tmp = head;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new Node<T>(new_data);
        tmp->next->prev = tmp;
    } else {
        head = new Node<T>(new_data);
    }
}


template<typename T>
void List<T>::push_front(T *new_data) {
    Node<T> *tmp = new Node<T>(new_data);
    tmp->next = head;

    if (head)
        head->prev = tmp;

    head = tmp;
}


template<typename T>
void List<T>::print(ostream &out) {
    Node<T> *tmp = head;
    while (tmp) {
        tmp->data->draw(out);
        cout << endl;
        tmp = tmp->next;
    }
}

template<typename T>
void List<T>::deleteNode(T *del_data)
{
    Node<T> *tmp = head;
    /* base case */

    while (tmp->data != del_data) {
        tmp = tmp->next;
    }


    if (tmp->data == nullptr || del_data == nullptr)
        return;

    /* If node to be deleted is head node */
    if (tmp->data == head->data)
        head = head->next;

    /* Change next only if node to be
    deleted is NOT the last node */
    if (tmp->next != nullptr)
        tmp->next->prev = tmp->prev;

    /* Change prev only if node to be
    deleted is NOT the first node */
    if (tmp->prev != nullptr)
        tmp->prev->next = tmp->next;

    /* Finally, free the memory occupied by del*/
    free(tmp);
    return;
}

template<typename T>
ListIterator<T> List<T>::begin() {
    return ListIterator<T>(*this);
}

template<typename T>
ListIterator<T> List<T>::end() {
    return ListIterator<T>(*this, true);
}

#endif //SHAPES_LIST_H
