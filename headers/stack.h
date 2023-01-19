#ifndef PROG3_STACK_H
#define PROG3_STACK_H


struct Stack {
    unsigned int depth;     // Tiefe des Stacks
    char *content;          // Inhalt des Stacks
    unsigned int top;       // Index des obersten freien Elements
};

Stack *create_stack(unsigned int);

void push(Stack *, char);

char pop(Stack *);

int isEmpty(Stack *);

void destroy_stack(Stack *);

#endif //PROG3_STACK_H