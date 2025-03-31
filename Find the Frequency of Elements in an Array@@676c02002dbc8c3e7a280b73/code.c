#include<stdio.h>
int main(){
    int N,count;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    count = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}