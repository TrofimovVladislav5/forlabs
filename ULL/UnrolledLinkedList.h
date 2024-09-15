#pragma once
#include <stdexcept>
#include <vector>
#include <cmath>
#include <iostream>
#include "Node.h"

class UnrolledLinkedList {
public:
    UnrolledLinkedList(int capacity);
    UnrolledLinkedList(std::vector<int>& list);
    ~UnrolledLinkedList();

    void insert(int index, int value);
    void pop(int index);
    int find(int value);
    void popFront();
    void popBack();
    void print();

private:
    int size;
    int current_size;
    Node* head;

    int calculateOptimalNodeSize(int num_elements);
};