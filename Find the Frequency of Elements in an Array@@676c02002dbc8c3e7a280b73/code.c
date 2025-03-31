#include<stdio.h>
int main(){
    int N,count,i,visit[n];
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        visit[i] = 0;
    }
    count = 0;
    for(int i=0;i<N;i++){
        if (visit[i] == 1)
        continue;

        int count = 1;
        for(int j=0;j<N;j++){
            if(arr[i] == arr[j]){
                count++;
                visit[j] = 1;
            }
        }
    printf("%d",arr[i],count);
}
    return 0;
}