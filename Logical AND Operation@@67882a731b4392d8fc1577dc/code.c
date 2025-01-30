#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if(a > 0 && b > 0){
        printf("True",a,b);
    }
    else{
        printf("False",a,b);
    }
    return 0;
}