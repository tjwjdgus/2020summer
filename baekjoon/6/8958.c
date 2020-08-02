#include<stdio.h>
#include<string.h>
int main(void) {
	int num;
	scanf("%d", &num);
	char str[81];
	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		int sum = 0, count = 0;
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == 'o' || str[j] == 'O') {
				count++;
				sum += count;
			}
			else
				count = 0;
		}
		printf("%d\n", sum);
	}
	return 0;
}
