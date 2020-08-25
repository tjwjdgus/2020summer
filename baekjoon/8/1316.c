#include<stdio.h>
#include<string.h>
int cnt(char *str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != str[i + 1]) {
			for (int j = i+1; j < strlen(str); j++) {
				if (str[i] == str[j])
					return 0;
			}
		}
	}
	return 1;
}

int main(void) {
	int num;
	scanf("%d", &num);
	char str[101];
	int sum = 0;
	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		sum += cnt(str);
	}
	printf("%d\n", sum);
	return 0;
}
