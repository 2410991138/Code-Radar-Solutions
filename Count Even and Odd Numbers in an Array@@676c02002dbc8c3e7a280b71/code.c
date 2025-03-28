#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        printf("%d",arr[N]);
    }
    int odd = 0;  int even = 0;
    for(int i=0;i<N;i++){
        if(arr[N]%2==0)
        even++;
        else
        odd++;
    }
    printf("%d %d",even odd);
    return 0;
}