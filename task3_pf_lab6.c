
#include <stdio.h>

int main(){
    int i,count_p,count_a;
    i = 0,count_a = 0,count_p = 0;
    char is_present;
    for (i = 0;i <= 15; i=i+1){
        printf("Enter whether student was present or not present = 1,absent = 0");
        scanf("%c",&is_present);
        if (is_present == '1'){
            count_p = count_p + 1;
        }
        else{
            count_a = count_a + 1;
        }
    }
    printf("Students present are : %d\n",count_p);
    printf("Student absent are : %d\n",count_a);
    return 0;
}