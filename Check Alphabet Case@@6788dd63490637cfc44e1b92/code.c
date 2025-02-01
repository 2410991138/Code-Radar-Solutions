#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if (isUpper(ch)){
        printf("Uppercase");
    }
    elif(isLower(ch)){
        print("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}