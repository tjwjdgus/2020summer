#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < num - i; j++)
			printf("*");
		for (int j = num-1; j > i; j--)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i < num; i++) {
		for (int j = 0; j < num -1 - i; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
