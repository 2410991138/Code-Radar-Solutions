#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=3){
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
//   int lar = arr[n-1];
//   int seclar = -1;

//   for(int i=n-2;i>=0;i--){
//     if(arr[i] != lar){
//         seclar = arr[i];
//         break;
//     }
//   }
//   if(seclar == -1){
//     printf("-1");
//   }
//   else{
//     printf("%d",seclar);
//   }
printf("%d",arr[n-2]);
  return 0;
}