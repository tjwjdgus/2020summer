#include<stdio.h>
int main(void) {
	int num1;
	int num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	int c_num1 = (num1 % 100 % 10) * 100 + (num1 % 100 / 10) * 10 + num1 / 100;
	int c_num2 = (num2 % 100 % 10) * 100 + (num2 % 100 / 10) * 10 + num2 / 100;
	if (c_num1 > c_num2)
		printf("%d\n", c_num1);
	else
		printf("%d\n", c_num2);
	return 0;
}
