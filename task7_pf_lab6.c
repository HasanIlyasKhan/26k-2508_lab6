
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+1){
        for(j=n;j>i;j=j-1){
            printf(" ");
        }
        printf("*");
        for(j=0;j<i*2;j=j+1){
            printf(" ");
        }
        if(i!=0){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i=i-1){
        for(j=n;j>i;j=j-1){
            printf(" ");
        }
        printf("*");
        for(j=0;j<i*2;j=j+1){
            printf(" ");
        }
        if(i!=0){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}