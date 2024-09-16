#include<stdio.h>

int main() {
    int age = 0, creditScore = 0;
    float income = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income: ");
    scanf("%f", &income);

    printf("Enter your credit score: ");
    scanf("%d", &creditScore);

    if (age >= 21 && age <= 60 && income >= 30000 && creditScore >= 650) {
        printf("You are eligible for a loan.\n");
    } 
    else {
        printf("You are not eligible for a loan.\n");
    }

    return 0;
}
