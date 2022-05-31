#pragma once
#include "List.h"

template <typename T>
class Queue {
private:
    List<T> list;
public:
    void push(const T&);
    T front() const;
    void pop();
};

template <typename T>
void Queue<T>::push(const T& val) {
    list.add(val);
}

template <typename T>
T Queue<T>::front() const {
    return list.get(0);
}

template <typename T>
void Queue<T>::pop() {
    list.del(0);
}

