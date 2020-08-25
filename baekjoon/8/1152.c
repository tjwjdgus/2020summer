#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	char *str = malloc(sizeof(char) * 1000000);
	scanf("%[^\n]s", str);
	char *ptr = strchr(str, ' ');
	int count = 0;
	while (ptr != NULL) {
		ptr = strchr(ptr + 1, ' ');
		count++;
	}
	if (str[0] == ' ')
		count--;
	if (str[strlen(str)-1] != ' ')
		count++;
	printf("%d\n", count);
	free(str);
	return 0;
}
