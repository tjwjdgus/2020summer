#include<stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	scanf("%s", str);
	char *ptr = strtok(str, ".");
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, ".");
	}
	return 0;
}
