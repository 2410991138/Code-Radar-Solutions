int isPrime(int num){
    int count;
    for(int i=1;i<num;i++){
        if(num%i == 0)
        count++;
    }
    if(count==2)
    return 1;
    else
    return 0;
    }
 
