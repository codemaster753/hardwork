#include <stdio.h>
#include <stdlib.h>

void main(){
int top = -1, stack[5]; //size of array kept as 5 i.e N
int ch;

do{
prinf("Enter choice:1.push\n2.pop\n3.peek\n4.display\n");
scanf("%d",&ch);

switch(ch){

case 1:
void push(){
int x;
    printf("Enter number you want to push");
    scanf("%d",&x);
    if (top == 4){  //N-1 i.e 5-1
    printf("overflow");
    }
    else{
    top++;
    stack[top]=x;
    }
break;

case 2:
void pop(){
    int item;  //item created to store the popped element inorder to display it
    if(top == -1){
    printf("underflow");
    }
    else{
    item = stack[top];
    top--;
    printf("The popped element is:%d",item);
break;

case 3:
    void peek(){
    if(top == -1){
    printf("underflow");
    }
    else{
    printf("Top element of stack is:%d",stack[top]);
    }
break;

case 4:
    void display(){
    int i;
    for(i=top;i>=0;i--){
    printf("ELements of stack are:\n");
    printf("%d",stack[i]);
    }
break;

case 5:
default:
printf("Invalid choice");
}
}
while(ch!=0);
return 0;
}

    
    

    
    



        
