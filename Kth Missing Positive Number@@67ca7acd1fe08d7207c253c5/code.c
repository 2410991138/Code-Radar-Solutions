int KthMissing(int arr[],int n,int k){
int i=0;
int num=1;
while(i<n && k>0){
    if(arr[i] == num){
        i++;
    }
    else{
        k--;
    }
    num++;
}
while(k--){
    num++;
}
return num-1;
}