
#include <stdio.h>
int main(){
    int e_bill,count_even,count_odd,i,number;
    count_even=0;
    count_odd=0;
    printf("Enter your electricity bill :");
    scanf("%d",&e_bill);
    for(i=0;e_bill>0;i=i+1){
        number=e_bill%10;
        if(number%2==0){
            count_even=count_even+1;
        }
        else{
            count_odd=count_odd+1;
        }
        e_bill=e_bill/10;
    }
    printf("Even count is :%d\n",count_even);
    printf("Odd count is :%d",count_odd);
    return 0;
}