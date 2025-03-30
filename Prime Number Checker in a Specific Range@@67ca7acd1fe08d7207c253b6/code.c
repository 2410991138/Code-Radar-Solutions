#include<stdio.h>
int isPrime(int n){
    for(int i=0;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int printPrimesInRange(int a,int b){
    printf("%d",i);
}