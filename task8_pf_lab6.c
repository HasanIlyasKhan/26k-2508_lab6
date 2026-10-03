#include <stdio.h>

int main() {
    int max,min,num,index,i;
    max = 0;
    min = 999;
    int num_arr[8] = {0,0,0,0,0,0,0,0};
    for(i=0;i<8;i=i+1){
        printf("Enter a number :");
        scanf("%d",&num);
        if(num > max){
            max = num;
        }
        else if(num < min){
            min = num;
        }
        num_arr[i] = num;
    }
    printf("Array : ");
    for(i=0;i<8;i=i+1){
        printf("%d ",num_arr[i]);
    }
    printf("\nMaximum = %d",max);
    printf("\nMinimum = %d",min);
    printf("\nEnter a new number you wanted to add :");
    scanf("%d",&num);
    printf("Enter the index you wanted to add :");
    scanf("%d",&index);
    num_arr[index] = num;
    printf("Array : ");
    for(i=0;i<8;i=i+1){
        printf("%d ",num_arr[i]);
    }
    printf("\nEnter a index where you wanted to delete the element :");
    scanf("%d",&index);
    num_arr[index] = 0;
    printf("Array : ");
    for(i=0;i<8;i=i+1){
        printf("%d ",num_arr[i]);
    }
    return 0;
}