#include<stdio.h>
int main(){
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;

}