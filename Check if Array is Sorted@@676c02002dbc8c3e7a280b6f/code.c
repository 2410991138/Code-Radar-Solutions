#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(int i=1;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int isnotSorted = 0;
    int sorted = 0;
    for(int i=1;i<N;i++){
        if(arr[i]<arr[i+1]){
            isnotSorted = 0;
        }
        else{
            isSorted = 0;
        }

    }
    if(isnotSorted){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
    return 0;

}