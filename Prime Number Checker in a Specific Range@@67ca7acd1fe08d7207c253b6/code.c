#include<stdio.h>
int isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
        }
        else{
            return 1;
    }
void printPrimesInRange(int a,int b){
    int foundPrime=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            if(foundPrime){
                printf(" ");
            }
            printf("%d",i);
            foundPrime=1;
        }
    }
}