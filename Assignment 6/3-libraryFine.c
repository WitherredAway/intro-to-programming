// A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days
// fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership
// will be cancelled. Write a program to accept the number of days the member is late to return the book and
// display the fine or the appropriate message.

#include <stdio.h>

int main() {
    int days;
    printf("Enter the number of days the member is late: ");
    scanf("%d", &days);

    float fine = 0;
    if (days <= 5) {
        fine = 0.5;
    } else if (days <= 10) {
        fine = 1;
    } else if (days <= 30) {
        fine = 5;
    } else if (days > 30) {
        printf("Member is >30 days late, membership cancelled.\n");
        return 0;
    }
    printf("The fine is %.2f rupees\n", fine);
    return 0;
}