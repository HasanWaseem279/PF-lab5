#include<stdio.h>
int main() {
	int a, b, max;
	
	printf("Enter a\n");
	scanf("%d", &a);
	
	printf("Enter b\n");
	scanf("%d", &b);
	
	a > b ? printf("a is greater") : printf("b is greater");
	
	return 0;
}