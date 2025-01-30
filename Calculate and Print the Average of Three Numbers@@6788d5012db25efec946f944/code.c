#include <stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    float b;
    scanf("%f",&b);
    float c;
    scanf("%f",&c);
    float sum = (a+b+c)/3;
    printf("Average: %.2f",sum);
    return 0;
}