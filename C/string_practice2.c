#include<stdio.h>
#include<string.h>
int main(void) {
	char str[1001];
	int count = 0;
	scanf("%[^\n]s", str);
	char *ptr = strchr(str, ' ');
	while (ptr != NULL) {
		ptr = strchr(ptr+1, ' ');
		count++;
	}
	printf("%d\n", count);
	return 0;
}
