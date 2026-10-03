
#include <stdio.h>

int main(){
    int n,i;
    long long fact1,fact2,fact3,catalan;
    printf("Enter n: ");
    scanf("%d",&n);
    fact1=1;
    fact2=1;
    fact3=1;
    for(i=1;i<=2*n;i=i+1){
        fact1=fact1*i;
    }
    for(i=1;i<=n+1;i=i+1){
        fact2=fact2*i;
    }
    for(i=1;i<=n;i=i+1){
        fact3=fact3*i;
    }
    catalan=fact1/(fact2*fact3);
    printf("Catalan number = %lld",catalan);
    return 0;
}