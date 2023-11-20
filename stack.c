#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int top = -1, stack[5];

void push(int x){
    if(top == 4){
        printf("stack is full\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
        item = stack[top];
        top--;
        printf("popped element:%d\n",item);
    }
}

void peek(){
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
        printf("stack top is:%d\n",stack[top]);
    }
}

void display(){
    int i;
     if(top == -1){
        printf("stack is empty\n");
    }
    else{
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

void main(){
    push(1);
    push(2);
    push(3);
    display();
    pop();
    peek();
    display();
}
