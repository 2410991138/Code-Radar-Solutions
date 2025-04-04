#include<stdio.h>
int main(){
int N,temp[N],i,j;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
int K;
scanf("%d",&K);
K=K%N;

for(int i=0,j=K-1; i<j; i++, j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j] =temp;
}
for(int i=K,j=N-1; i<j; i++,j--){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(int i=0,j=N-1; i<j; i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(int i=0; j=N-1; i++){
    printf("%d",arr[i]);
}
return 0;
}
