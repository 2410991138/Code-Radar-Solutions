#include<stdio.h>
#include<string.h>
void insertionSort(char arr[],int n){
    int i,j;
    char temp[100];
    for(int i=1;i<n;i++){
        strcpy(temp,arr[i]);
    }
    while(j>=0 && arr[j]>temp){
        strcpy(arr[j+1],arr[j]);
        j--;
    }
    strcpy(arr[j+1],temp);
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return;
}