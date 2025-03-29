#include<stdio.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        char temp[100];
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    void printArray(char[][100],int n){
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
    return ;
}