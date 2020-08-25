#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int num;
	printf("1-7사이의 숫자를 입력: ");
	scanf("%d", &num);
	char *str = malloc(sizeof(char) * 6 * num);
	char *temp = malloc(sizeof(char) * 6);
	int count = 0;
	while (count != num) {
		count++;
		if (count == 1)
			sprintf(str, "%dst", count);
		else if (count == 2) {
			sprintf(temp, ", %dnd", count);
			strcat(str, temp);
		}
		else if (count == 3) {
			sprintf(temp, ", %drd", count);
			strcat(str, temp);
		}
		else {
			sprintf(temp, ", %dth", count);
			strcat(str, temp);
		}
	}
	printf("%s", str);
	free(str);
	free(temp);
	return 0;
}

