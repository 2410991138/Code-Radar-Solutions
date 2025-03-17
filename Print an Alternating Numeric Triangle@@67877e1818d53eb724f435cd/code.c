#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k;
    for(int i=1;i<=n;i++){
            k = i;
        for(int j=1;j<=i;j++){
        printf("%d ",(k%2));
        k++;
        }
        printf("\n");
    }
    return 0;

}