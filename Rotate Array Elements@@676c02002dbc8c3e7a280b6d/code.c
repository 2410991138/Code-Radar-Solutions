#include<stdio.h>
int main(){
int N,temp[N],i;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    scanf("%d",&arr[N]);
}
int K;
scanf("%d",&K);
for(int i=0;i<N;i++){
    temp[(i+K)%2] = arr[i];
}
printf("%d",arr[i]);
return 0;
}