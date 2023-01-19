#include <iostream>
#include "stack.h"

int main() {
// Test der Datenstruktur STACK
    Stack *s;
    s = create_stack(3);
    push(s, 'a');
    push(s, 'b');
    push(s, 'c');
    push(s, 'd');
    while (!isEmpty(s))
        std::cout << pop(s) << std::endl;
    pop(s);
    destroy_stack(s);
    std::cin.ignore();
    return 0;
}

