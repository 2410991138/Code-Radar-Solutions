#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int isnotSorted = 0;
  
    for(int i=0;i<N;i++){
        if(arr[i]<arr[i+1]){
            isnotSorted = 0;
        }
    }
    if(isnotSorted){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }

    return 0;

}