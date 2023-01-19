#ifndef PROG3_STACK_H
#define PROG3_STACK_H


struct Stack {
    unsigned int depth;     // Tiefe des Stacks
    char *content;          // Inhalt des Stacks
    unsigned int top;       // Index des obersten freien Elements

    Stack(unsigned int);

    ~Stack();

    void push(char);

    char pop();

    int isEmpty() const;

};

#endif //PROG3_STACK_H