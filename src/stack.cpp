#include "stack.h"
#include <iostream>

Stack::Stack(unsigned int depth) {
    this->content = new char[depth];
    if (this->content == nullptr) {
        exit(-1);
    }
    this->depth = depth;
    this->top = 0;
}

void Stack::push(char content) {
    if (this->top == this->depth) {
        std::cout << "Der Stack ist voll." << std::endl;
        return;
    }

    this->content[this->top] = content;
    this->top++;
}

char Stack::pop() {
    if (isEmpty()) {
        std::cout << "Der Stack ist leer." << std::endl;
        return '\0';
    }

    char c = this->content[this->top - 1];
    this->content[this->top - 1] = ' ';
    this->top--;

    return c;
}

int Stack::isEmpty() const {
    if (this->top == 0) {
        return 1;
    }
    return 0;
}

Stack::~Stack() {
    delete[] this->content;
}
