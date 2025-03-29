#include<stdio.h>
void selectionSort(char arr[],int n){
    int i,j,min;
    for(int i=0;i<n-1;i++){
        char temp;
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
    void printArray(char arr[],int n){
        for(int i=0;i<n;i++){
            printf("%c",arr[i]);
        }
    }
    return ;
}