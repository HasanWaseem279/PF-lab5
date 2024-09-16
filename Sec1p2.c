#include<stdio.h>

int main() {
    int num = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("The number is Positive\n");
        if (num % 2 == 0) {
            printf("The number is Even\n");
        } 
        else {
            printf("The number is Odd\n");
        }
    } 
    else if (num < 0) {
        printf("The number is Negative\n");
    } 
    else {
        printf("The number is Zero\n");
    }

    return 0;
}
