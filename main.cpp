
// Owen Radcliffe lab 5 october 22


#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <stack>
#include <list>
#include "Lab5MyStack.h"

using namespace std;

string stringReversal1(string input) {
    stack<char> charstack;
    string output;

    for (int i=0; i < input.length(); i++) {
        charstack.push(input.at(i));
    }

    while (charstack.empty() == false) {
        output.push_back(charstack.top());
        charstack.pop();
    }

    return output;
}

string stringReversal2(string input) {
    vector<char> charvec;
    string output;

    for (int i=0; i < input.length(); i++) {
        charvec.push_back(input.at(i));
    }

    while (charvec.empty() == false) {
        output.push_back(charvec.back());
        charvec.pop_back();
    }

    return output;
}

string stringReversal3(string input) {
    list<char> charlist;
    string output;

    for (int i=0; i < input.length(); i++) {
        charlist.push_back(input.at(i));
    }

    while (charlist.empty() == false) {
        output.push_back(charlist.back());
        charlist.pop_back();
    }

    return output;
}

string stringReversal4(string input) {
    Stack stack;
    string output;

    for (int i=0; i < input.length(); i++) {
        stack.push(input.at(i));
    }

    while (stack.isEmpty() == false) {
        output.push_back(stack.pull());
    }

    return output;
}

int main() {
    string test = "abcdefg";
    std::cout << test << std::endl;

    test = stringReversal1(test);

    std::cout << test << std::endl;
    test = stringReversal2(test);
    std::cout << test << std::endl;
    test = stringReversal3(test);
    std::cout << test << std::endl;
    test = stringReversal4(test);
    std::cout << test << std::endl;

    return 0;
}