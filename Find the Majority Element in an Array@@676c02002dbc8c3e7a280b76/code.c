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
    
    }
    int cand=arr[N/2];

    int count = 0;
    for(int i=0;i<N;i++){
        if(arr[i]==cand){
            count++;
        }
    }
    if(count>N/2 || count = N/2){
        printf("%d",cand);
    }
    else{
        printf("-1");
    }
    return 0;
}
