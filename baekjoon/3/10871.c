#include<stdio.h>
int main(void) {
	int num1,num2;
	scanf("%d %d", &num1,&num2);
	int num;
	for (int i = 0; i < num1; i++) {
		scanf("%d", &num);
		if (num < num2)
			printf("%d ", num);
	}
	return 0;
}
