#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int sum = 0;
	char *n=malloc(sizeof(char)*num);
	scanf("%s", n);
	for (int i = 0; i < strlen(n); i++) {
		sum += n[i] - 48;
	}
	printf("%d\n", sum);
	free(n);
	return 0;
}
