#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int num1;
	scanf("%d", &num1);
	for (int i = 0; i < num1; i++) {
		int num2;
		scanf("%d", &num2);
		char *str = malloc(sizeof(char) * 21);
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++) {
			for (int k = 0; k < num2; k++) {
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
