#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int str;
	int max = -1000000, min = 1000000;
	for (int i = 0; i < num; i++) {
		scanf("%d", &str);
		if (max < str)
			max = str;
		if (min > str)
			min = str;
	}
	printf("%d %d\n", min, max);
	return 0;
}
