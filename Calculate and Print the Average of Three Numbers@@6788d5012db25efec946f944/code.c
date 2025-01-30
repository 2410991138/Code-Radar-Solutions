#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    int sum = (a+b+c)/3;
    printf("Average: %.2d",sum);
    return 0;
}