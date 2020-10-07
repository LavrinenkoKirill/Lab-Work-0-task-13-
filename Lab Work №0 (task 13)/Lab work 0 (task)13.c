#include <stdio.h>
int main()
{
	int a, b, c;
	printf(" Input a : ");
	scanf("%d", &a);
	printf(" Input b : ");
	scanf(" %d", &b);
	printf("Input c : ");
	scanf("%d", &c);
	int d = b * c;
	printf("Your result : %d\n", d);
	printf("%d * %d = %d\n", b, c, d);
	return 0;
}