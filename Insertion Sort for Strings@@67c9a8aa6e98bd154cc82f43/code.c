#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100],int n){
    for(int i=1;i<n;i++){
       char temp[100];
        strcpy(temp,arr[i]);
        int j = i-1;
    
    while(j>=0 && strcmp(arr[j],temp)>0){
        strcpy(arr[j+1],arr[j]);
        j--;
    }
    strcpy(arr[j+1],temp);
}
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return;
}