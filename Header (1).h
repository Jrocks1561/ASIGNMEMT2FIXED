#ifndef STACK_H
#define STACK_H

#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
    bool isEmpty() const;
    void push(int value);
    void pop();
    int top() const;
    double average() const;
};

#endif // STACK_H
