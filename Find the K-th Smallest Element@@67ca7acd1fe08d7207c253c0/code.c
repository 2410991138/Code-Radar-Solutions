#include<stdio.h>
int kthSmallest(int arr[],int n,int k){
    int temp;
    if(k<1||k>n){
        return -1;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
            return[k-1];
        }
        }
        return 0;

    }
