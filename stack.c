#include <stdio.h>
int top = -1, stack[5];
void push(int x) {
    if (top == 4) {
        printf("Stack overflow");
    } else {
        top++;
        stack[top]=x;
        printf("Pushed: %d\n",x);
    }
}
void pop() {
    int item;
    if (top == -1) {
        printf("Stack is empty.");
    } else {
        item = stack[top];
        top--;
        printf("Popped: %d\n", item);
    }
}
void peek(){
    if(top == -1){
    printf("satck is empty");
    }
    else{
    printf("Top element is:%d",stack[top]);
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
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
