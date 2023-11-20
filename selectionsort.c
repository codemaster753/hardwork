#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[i]){
            min=j;
        }
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
   }
}
void printArray(int a[],int size){
    for(int i=0;i<=size;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void main(){
    int n=5;
    int a[]={56,36,93,44,12};
    printf("unsorted array\n");
    printArray(a,n);
    selectionSort(a,n);
    printf("sorted array\n");
    printArray(a,n);
}
