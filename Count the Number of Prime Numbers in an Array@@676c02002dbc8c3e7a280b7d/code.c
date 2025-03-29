#include<stdio.h>
int main(){
    int arr[N],count = 0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N;j++){
        if(N%i == 0){
            count++;
        }
        if(count == 2){
            printf("%d",arr[i]);
        }
    }
    return ;
}