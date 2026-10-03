
#include <stdio.h>

int main() {
    int pin,sum,i;
    sum = 0;
    printf("Enter your pin :");
    scanf("%d",&pin);
    while (pin < 1000 || pin > 9999){
        printf("Enter your pin :");
        scanf("%d",&pin);
    }
    for (i = 0;i <=4;i=i+1){
        sum = sum + (pin % 10);
        pin = pin / 10;
    }
    if (sum > 10){
        printf("Strong Pin");
    }else{
        printf("Week Pin");
    }
    return 0;
}