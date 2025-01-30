#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if(a > 0 && b < 0 || a < 0 && b > 0){
        print("True",a,b);
    }
    else{
        print("False",a,b);
    }
    return 0;
}