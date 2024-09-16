#include<stdio.h>

int main() {
    int num = 0, count = 0;

    printf("Enter a number\n");
    scanf("%d", &num);

    if (num & 1) count++;
    else if (num & 2) count++;
    else if (num & 4) count++;
    else if (num & 8) count++;
    else if (num & 16) count++;
    else if (num & 32) count++;
    else if (num & 64) count++;
    else if (num & 128) count++;

    printf("There are %d Number of 1's", count);

    return 0;
}
