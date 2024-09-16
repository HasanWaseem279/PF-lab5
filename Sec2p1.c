#include<stdio.h>

int main() {
    int num = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 3 and 5\n");
    } 
    else {
        printf("The number is not divisible by both 3 and 5\n");
    }

    return 0;
}
