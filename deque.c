#include<stdio.h>
#define MAX 100

struct Deque{
int arr[MAX];
int front;
int rear;
int size;
};

int isFull(struct Deque *dq){
return((dq->front == 0 && dq->rear == dq -> size-1 || dq->front == dq->rear+1)); //circular linked list hence rear and front are aaju baju
}

int isEmpty(struct Deque *dq){
return(dq->front == -1);
}

void initDeque(struct Deque *dq,int size){ //construct deque
dq->front = -1;
dq->rear = 0;
dq->size= size;
}

void insertfront(struct Deque *dq,int key){
if (isFull(dq)){
printf("Overflow\n");
return;
}
if(dq->front == -1)
{
dq->front = 0;
dq->rear = 0;
}
else if (dq->front == 0)
{
dq->front = dq->size - 1;
}
else {
dq->front = dq->front - 1;
}
dq->arr[dq->front]= key;
}

void insertrear(struct Deque *dq,int key){
if (isFull(dq)){
printf("Overflow\n");
return;
}
if(dq->front == -1)
{
dq->front = 0;
dq->rear = 0;
}
else if (dq->rear == dq ->size-1)
{
dq->rear =0;
}
else {
dq->rear = dq->rear+ 1;
}
dq->arr[dq->rear]= key;
}

void deletefront(struct Deque *dq){
if (isEmpty(dq)){
printf("Underflow\n");
return;
}
if(dq->front == dq->rear)
{
dq->front = -1;
dq->rear = -1;
}
else if (dq->front == dq ->size-1)
{
dq->front =0;
}
else {
dq->front= dq->front+ 1;
}
}

void deleterear(struct Deque *dq){
if (isEmpty(dq)){
printf("Underflow\n");
return;
}
if(dq->front == dq -> rear)
{
dq->front = -1;
dq->rear = -1;
}
else if (dq->rear == 0)
{
dq->rear= dq->size - 1;
}
else {
dq->rear = dq->rear - 1;
}
}

int getfront(struct Deque *dq) {
if (isEmpty(dq)) {
printf("Underflow\n");
return;
}
return dq->arr[dq->front];
}

int getrear(struct Deque *dq) {
if (isEmpty(dq)) {
printf("Underflow\n");
return;
}
return dq->arr[dq->rear];
}

int main() {
struct Deque dq;
initDeque(&dq, 5);
// Function calls
printf("Insert element at rear end: 5\n");
insertrear(&dq, 5);
printf("Insert element at rear end: 10\n");
insertrear(&dq, 10);
printf("Get rear element: %d\n", getrear(&dq));
deleterear(&dq);
printf("After delete rear element, new rear becomes: %d\n",
getrear(&dq));
printf("Inserting element at front end: 15\n");
insertfront(&dq, 15);
printf("Get front element: %d\n", getfront(&dq));
deletefront(&dq);
printf("After delete front element, new front becomes: %d\n",
getfront(&dq));
return 0;
}
