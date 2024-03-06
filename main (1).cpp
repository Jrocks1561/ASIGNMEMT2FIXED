//JoshaLynn Worth
//03-05-2024
#include <iostream>
#include "Header.h"

using namespace std;

int main() {
    Stack stack;
    int choice;

    do {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Average\n";
        cout << "5. Exit\n";
        cout << "Enter your choice ==> ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to push ==> ";
                cin >> value;
                stack.push(value);
                break;
            }
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Top of the stack==> " << stack.top() << endl;
                break;
            case 4:
                cout << "Average value of stack elements ==> " << stack.average() << endl;
                break;
            case 5:
                cout << "GOODBYEEE\n";
                break;
            default:
                cout << "Invalid choice. Do again :(\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
