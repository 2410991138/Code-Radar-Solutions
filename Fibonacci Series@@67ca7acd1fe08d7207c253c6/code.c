#include<stdio.h>
int fibonacciSeries(int n){
    int i,a=0,b=1;
    for(int i=0;i<n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}