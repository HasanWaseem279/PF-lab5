#include<stdio.h>

int main() {
    int num = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    (num > 0) ? printf("The number is Positive\n") : 
	(num < 0) ? printf("The number is Negative\n") : 
    printf("The number is Zero\n");

    return 0;
}
