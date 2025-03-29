#include<stdio.h>
#include<string.h>
void selectionSort(char arr[][100],int n){
    int i,j,min;
    char temp[100];
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[min])<0){
                min = j;
            }
        }
        if(min != i){
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[min]);
            strcpy(arr[min],temp);
        }
    }
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
        return;
    }

}
