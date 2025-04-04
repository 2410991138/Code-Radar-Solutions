#include<stdio.h>
int main(){
    int N,count,i,visit[N];
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<Nq;i++){
        scanf("%d",&arr[i]);
        visit[i] = 0;
    }
    for(int i=0;i<N-1;i++){
        if (visit[i] == 1)
        continue;

        int count = 1;
        for(int j=i+1;j<N;j++){
            if(arr[i] == arr[j]){
                count++;
                visit[j] = 1;
            }
               }
       }
    printf("%d %d\n",arr[i],count);

    return 0;
}