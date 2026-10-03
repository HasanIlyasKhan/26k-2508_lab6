
#include <stdio.h>

int main() {
    int ticket_num;
    printf("Enter the ticket number: ");
    scanf("%d", &ticket_num);
    while (ticket_num != 0) {
        printf("%d", ticket_num % 10);
        ticket_num = ticket_num / 10;
    }
    return 0;
}