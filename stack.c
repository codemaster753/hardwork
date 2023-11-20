#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void push(int item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow. Cannot push %d\n", item);
    } else {
        stack[++top] = item;
        printf("Pushed: %d\n", item);
    }
}
void pop() {
    if (top < 0) {
        printf("Stack is empty. Cannot pop\n");
    } else {
        int item = stack[top--];
        printf("Popped: %d\n", item);
    }
}
void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
int main() {
    push(5);
    push(10);
    push(15);
    display();
     pop();
    pop();
    pop();
    display();
    return 0;
}
