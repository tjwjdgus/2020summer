#include<stdio.h>//입력한 단부터 단까지 구구단

void simple(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		for (int j = 1; j <= 9; j++)
			printf("%d*%d=%2d ", i, j, i*j);
		printf("\n");
	}
}
int main(void) {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
		simple(n2, n1);
	else
		simple(n1, n2);
	return 0;
}
