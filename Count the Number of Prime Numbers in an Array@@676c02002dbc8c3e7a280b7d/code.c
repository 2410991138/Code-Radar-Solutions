#include<stdio.h>
int main(){
    int N;
    int arr[N],i,count = 0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N;j++){
        if(N%i == 0){
            count++;
        }
        if(count == 2){
          printf("%d",count);  
        }
        
    }
    return 0;
}