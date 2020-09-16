#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int min(int x, int y)
{
	if (x < y)
		return x;
	else
		return y;
}
int main()
{
	int* num1, * num2, * num3, * num4;
	int a, b, c, d;
	num1 = &a;
	num2 = &b;
	num3 = &c;
	num4 = &d;
	char print[20] = { "Enter 4 number" };
	int x;
	printf("%s : ", print);
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (max(max(a, b), max(c, d)) < 0 )
		printf("Max number is : %d and is a negative number\n", max(max(a, b), max(c, d)));
	else
		printf("Max number is : %d and is a positive number\n", max(max(a, b), max(c, d)));

	if (min(min(a, b), min(c, d)) < 0 )
		printf("Min number is : %d and is a negative number\n", min(min(a, b), min(c, d)));
	else
		printf("Min number is : %d and is a positive number\n", min(min(a, b), min(c, d)));

	if (max(max(a, b), max(c, d)) == 0 && min(min(a, b), min(c, d)) == 0)
		printf(" \n All number is 0 \n");
	return 0;
}