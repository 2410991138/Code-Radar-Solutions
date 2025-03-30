#include<stdio.h>
int main(){
    int N,i;
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }
    if(arr[i]<=arr[i+1]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;

}