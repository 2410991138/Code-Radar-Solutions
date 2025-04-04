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
K=K%N;

for(int i=0;i<j;i++){
    for(int j=0;j<N-1;j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
for(int i=K;i<j;i++){
    for(int j=0;j<N;j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
for(int i=0;i<N;i++){
    printf("%d",arr[i]);
}
}
printf("\n");
}
return 0;

}