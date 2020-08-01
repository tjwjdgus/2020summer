#include<stdio.h>
int main(void) {
	for (int i = 2; i <= 9; i++)
		printf("  <<%d단>>   ", i);
	printf("\n");
	for (int j = 1; j <= 9; j++) {
		for (int i = 2; i <= 9; i++) 
			printf("%d x %d = %2d  ", i, j, i*j);
		printf("\n");
	}
	return 0;
}
