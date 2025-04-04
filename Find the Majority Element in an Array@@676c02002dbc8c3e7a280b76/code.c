#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    int temp;
    for(int i=0;i<=N-1;i++){
        for(int j=0;j<=N-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(arr[i]=arr[i+1]){
          
        }
    }
    printf("%d",arr[i]);
    return 0;
}
