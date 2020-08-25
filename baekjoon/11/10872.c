#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int factorial=1;
	for (int i = 1; i <= num; i++)
		factorial *= i;
	printf("%d\n", factorial);
	return 0;
}
