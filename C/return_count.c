#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int count = 0, sum, total = 0, result = num;
	while (1) {
		sum = (num / 10) + (num % 10);
		total = ((num % 10) * 10) + (sum % 10);
		num = total;
		count++;
		if (result == total) break;
	}
	printf("%d\n", count);
	return 0;
}
