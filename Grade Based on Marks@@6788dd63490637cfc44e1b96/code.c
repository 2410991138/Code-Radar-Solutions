#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a >= 90){
        printf(" A: %d",a);
    }
    else if(80<=a<=90){
        printf(" B: %d",a);
    }
    else if(70<=a<=80){
        printf("C: %d",a);
    }
    else if(60<=a<=70){
        printf("D: %d",a);
    }
    else{
        printf("F: %d",a);
    }
    return 0;
}