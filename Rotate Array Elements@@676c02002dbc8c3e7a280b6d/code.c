#include<stdio.h>
int main(){
int N,temp[N],i,j;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    scanf("%d",&arr[N]);
}
int K;
scanf("%d",&K);

for(int j=1;j<K;j++){
    temp = a[0];
    for(int i=0;i<N-1;i++){
        a[i] = a[i+1];
    }
    a[i] = temp;
}
printf("%d",arr[i]);
return 0;
}