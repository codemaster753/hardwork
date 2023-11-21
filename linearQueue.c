#include <stdio.h>
#include <stdlib.h>
#define n 5

int main() {
    int queue[n], ch = 1, front = 0, rear = 0;
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");

    while (ch) {
        printf("\nEnter the Choice:");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == n-1){
                    printf("\n Queue is Full");
                }
                else {
                    printf("\n Enter no :");
                    scanf("%d", &queue[++rear]);
                }
                break;

            case 2:
                if (front == 0 && rear == 0) {
                    printf("\n Queue is empty");
                } 
                else {
                    printf("\n Deleted Element is %d", queue[front]);
                    front++;
                }
                break;

            case 3:
                printf("\nQueue Elements are:\n ");
                if (front == 0 && rear == 0){
                    printf("\n Queue is Empty");
                }
                else {
                    for (int i = front; i < rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Wrong Choice: please see the options");
        }
    }

    return 0;
}
