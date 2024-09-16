#include <stdio.h>

int main() {
    int num, digitSum;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num == 0) {
        digitSum = 0;
    } 
	else {
        digitSum = num % 9;
        if (digitSum == 0) {
            digitSum = 9;
        }
    }

    printf("Single digit sum is: %d\n", digitSum);

    return 0;
}
