#include <stdio.h>
#include <stdlib.h>

int n, top = -1, *stack;

void push(int x) {
    if (top == n - 1)
        return; // Stack is full
    stack[++top] = x;
}

int pop() {
    if (top == -1)
        return -1; // Stack is empty
    return stack[top--];
}

int peek() {
    if (top == -1)
        return -1; // Stack is empty
    return stack[top];
}

void display() {
    for (int i = top; i > -1; i--)
        printf("%d ", stack[i]);
    printf("\n\n");
}

int main() {
    n = 10;

    printf("Initializing the stack with size 10\n\n");

    stack = (int *)malloc(n * sizeof(int));

    if (stack == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return -1;
    }

    printf("Pushing elements into the stack\n1\n2\n3\n\n");

    push(1);
    push(2);
    push(3);

    printf("Displaying elements of the stack -\n");

    display();

    printf("The top of the stack = %d\n\n", peek());

    printf("Pop the top of the stack = %d\n\n", pop());

    printf("Pop the top of the stack = %d\n\n", pop());

    printf("Displaying elements of the stack -\n");
    display();

    // Free the dynamically allocated memory
    free(stack);

    return 0;
}
