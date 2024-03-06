#include "Header.h"
#include <iostream>
#include <numeric>

using namespace std;

bool Stack::isEmpty() const {
    return elements.empty();
}

void Stack::push(int value) {
    elements.push_back(value);
}

void Stack::pop() {
    if (!isEmpty()) {
        elements.pop_back();
    } else {
        cout << "Stack is empty. Cannot pop.\n";
    }
}

int Stack::top() const {
    if (!isEmpty()) {
        return elements.back();
    } else {
        cerr << "Stack is empty.\n";
        return -1;
    }
}

double Stack::average() const {
    if (!isEmpty()) {
        double sum = accumulate(elements.begin(), elements.end(), 0);
        return sum / elements.size();
    } else {
        cerr << "Stack is empty. Cannot calculate average.\n";
        return 0;
    }
}
