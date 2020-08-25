#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char *name = malloc(sizeof(char) * 10);
	printf("이름\n:");
	scanf("%s", name);
	char *num=malloc(sizeof(char)*14);
	printf("-를 제외한 13자리 주민번호를 입력하시오.\n:");
	scanf("%s", num);
	while (strlen(num) != 13) {
		printf("주민등록번호가 13자리가 아닙니다.\n다시 입력하시오.\n:");
		scanf("%s", num);
	}
	char *n=malloc(sizeof(char)*4);
	strncpy(n, num, sizeof(n));
	n[2] = '\0';
	//2020년도 기준
	if (num[6] == '1' || num[6] == '2')
		printf("현재 %d세이신 %s님, 환영합니다.\n", 2020 - (1900 + atoi(n)) + 1, name);
	else
		printf("현재 %d세이신 %s님, 환영합니다.\n", 2020 - (2000 + atoi(n)) + 1, name);
	free(name);
	free(num);
	free(n);
	return 0;
}
