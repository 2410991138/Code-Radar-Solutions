#include<stdio.h>
void insertionSort(char arr[],int n){
    int i,j,temp;
    for(int i=1;i<n-1;i++){
        temp = i;
        j=j-1;
    
    while(j>=0 && arr[j] > temp){
        arr[j+1] = arr[j];
        j--;
    }
}
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }

    return;
}

