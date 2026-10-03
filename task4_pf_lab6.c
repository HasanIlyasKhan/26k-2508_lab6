#include <stdio.h>
#include <string.h>

int main(){
    char code[20];
    int is_palindrome,i,j;
    printf("Enter a code you wanted to check for: ");
    scanf("%s",code);
    j=strlen(code)-1;
    is_palindrome=1;
    for(i=0;i<=j;i=i+1){
        if(code[i]==code[j-i]){
            is_palindrome=1;
        }
        else{
            is_palindrome=0;
            break;
        }
    }
    if(is_palindrome==1){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}