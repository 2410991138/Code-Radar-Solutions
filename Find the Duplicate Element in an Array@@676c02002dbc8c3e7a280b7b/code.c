#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    int arr[N];
    for(int i=0;i<N-1;i++){
        scanf("%d",&arr[i]);  
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N-1;j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
                break;
            }

        }
       
    }
    return 0;
   
}