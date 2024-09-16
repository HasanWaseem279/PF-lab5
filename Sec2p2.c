#include<stdio.h>

int main() {
    int age = 0;
    char citizen;

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Are you a citizen? (y/n)\n");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y')) {
        printf("You are eligible to vote\n");
    } 
    else {
        printf("You are not eligible to vote\n");
    }

    return 0;
}
