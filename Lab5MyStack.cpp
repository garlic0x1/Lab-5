//
// Created by owen on 10/22/18.
//

#include "Lab5MyStack.h"
#include <vector>
#include <list>

using namespace std;

bool empty;

Stack::Stack() {
    empty = true;
}

bool Stack::isEmpty() const {
    return vect.empty();
}

void Stack::push(char &c) {
    vect.push_back(c);
}

char Stack::pull() {
    char output = vect.back();
    vect.pop_back();
    return output;
}