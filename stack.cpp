#include "stack.h"
#include <iostream>

Stack *create_stack(unsigned int depth) {
    Stack *tmp = new Stack;
    if (tmp == nullptr) {
        exit(-1);
    }
    tmp->content = new char[depth];
    if (tmp->content == nullptr) {
        exit(-1);
    }
    tmp->depth = depth;
    tmp->top = 0;
    return tmp;
}

void push(Stack *tmp, char content) {
    if (tmp->top == tmp->depth) {
        std::cout << "Der Stack ist voll." << std::endl;
        return;
    }

    tmp->content[tmp->top] = content;
    tmp->top++;
}

char pop(Stack *tmp) {
    if (isEmpty(tmp)) {
        std::cout << "Der Stack ist leer." << std::endl;
        return '\0';
    }

    char c = tmp->content[tmp->top-1];
    tmp->content[tmp->top-1] = ' ';
    tmp->top--;

    return c;
}

int isEmpty(Stack *tmp) {
    if (tmp->top == 0) {
        return 1;
    }
    return 0;
}

void destroy_stack(Stack *tmp) {
    delete[] tmp->content;
    delete tmp;
}
