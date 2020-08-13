#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	char *str = malloc(sizeof(str) * 101);
	scanf("%s", str);
	char english[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int count[27] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == english[j]) {
				if (count[j] == -1)
					count[j] += (i + 1);
				else
					break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", count[i]);
	}
	printf("\n");
	free(str);
	return 0;
}
