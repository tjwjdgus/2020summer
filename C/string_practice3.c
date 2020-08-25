#include<stdio.h>
#include<string.h>
int main(void) {
	char str[1001];
	int count = 0;
	scanf("%[^\n]s", str);
	char *ptr = strstr(str, "the");
	while (ptr != NULL) {
		ptr = strstr(ptr + 1, " the ");
		count++;
	}
	printf("%d\n", count);
	return 0;
}
