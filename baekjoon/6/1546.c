#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	double str[1000];
	for (int i = 0; i < num; i++)
		scanf("%lf", &str[i]);
	double max = str[0];
	for (int i = 0; i < num; i++) {
		if (max < str[i])
			max = str[i];
	}
	double sum = 0;
	for (int i = 0; i < num; i++) {;
		sum += ((str[i] / max) * 100);
	}
	printf("%f\n", sum / (double)num);
	return 0;
}
