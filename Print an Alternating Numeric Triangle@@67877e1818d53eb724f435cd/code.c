#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<i+i;j++){
            printf("%d ",(j%2));
        }
        printf("\n");
    }
    return 0;

}