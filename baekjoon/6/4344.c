#include<stdio.h>
#include<string.h>
int main(void) {
	int num1, num2;
	int str[1000];
	scanf("%d", &num1);
	for (int i = 0; i < num1; i++) {
		scanf("%d", &num2);
		double sum = 0;
		for (int j = 0; j < num2; j++) {
			scanf("%d", &str[j]);
			sum += str[j];
		}
		double avg = sum / num2;
		int count = 0;
		for (int j = 0; j < num2; j++) {
			if (avg < str[j])
				count++;
		}
		printf("%.3lf%%\n", (double)count / (double)num2 * 100);
	}
	return 0;
}
