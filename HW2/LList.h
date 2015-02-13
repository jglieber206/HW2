//
//  LList.h
//  HW2
//
//  Created by Jace Lieberman on 2/12/15.
//  Copyright (c) 2015 Jace Lieberman. All rights reserved.
//

#ifndef __HW2__LList__
#define __HW2__LList__
#include <iostream>


template <typename T>
class LList {
public:
    LList();
    ~LList();
    bool IsEmpty();
    void AddFront(T item);
    T PeekFront();
    void RemoveFront();
    void Print();
private:
    struct ListItem
    {
        T item;
        ListItem* next;
    };
    ListItem *head;
};

template <typename T>
LList<T>::LList()
{
    head = 0;
}

template <typename T>
LList<T>::~LList()
{
    while (!IsEmpty())
        RemoveFront();
}


template <typename T>
bool LList<T>::IsEmpty()
{
    return head == 0;
}


template <typename T>
void LList<T>::AddFront(T item)
{
    ListItem *t = new ListItem;
    t->item = item;
    t->next = head;
    head = t;
}


template <typename T>
T LList<T>::PeekFront()
{
    return head->item;
}

template <typename T>
void LList<T>::RemoveFront()
{
    if (head == 0)
        return;
    ListItem *t = head->next;
    head = head->next;
    delete t;
}

template <typename T>
void LList<T>::Print()
{
    for (ListItem *t = head; t; t = t->next)
    {
        std::cout << t->item << " ";
    }
    std::cout << "\n";
}

#include <stdio.h>

#endif /* defined(__HW2__LList__) */
