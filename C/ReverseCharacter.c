#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ReverseCharacter(char *str) {
	char temp;
	for (int i = 0; i < strlen(str) / 2; i++) {
		temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}
	printf("%s", str);
}
int main(void) {
	char *str = malloc(sizeof(char)*10);
	scanf("%s", str);
	printf("%s\n", str);
	ReverseCharacter(str);
	free(str);
	return 0;
}
