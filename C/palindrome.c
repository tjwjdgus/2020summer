#include<stdio.h>
#include<string.h>
void check(char *a, int len) {
	int count = 0;
	for (int i = 0; i < len / 2; i++) {
		if (a[i] != a[len - i - 1]) {
			printf("회문이 아닙니다.\n");
			break;
		}
		count++;
	}
	if (count == len / 2)
		printf("회문 입니다.\n");
}
int main(void) {
	char a[100];
	printf("문자열 입력: ");
	scanf("%s", a);
	check(a, strlen(a));
	return 0;
}
