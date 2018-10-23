//
// Created by owen on 10/22/18.
//

#ifndef LAB_5_LAB5MYSTACK_H
#define LAB_5_LAB5MYSTACK_H

#include <vector>
#include <list>

class Stack {

private:
    //std::vector<char> vect;
    std::list<char> vect;

public:
    Stack();

    bool isEmpty() const;

    void push(char& c);

    char pull();
};

#endif //LAB_5_LAB5MYSTACK_H
