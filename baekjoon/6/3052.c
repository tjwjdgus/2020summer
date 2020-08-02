#include<stdio.h>
#include<string.h>
int main(void) {
	int str[10], remain[10], count = 10;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &str[i]);
		remain[i] = str[i] % 42;
		for (int j = 0; j < i; j++) {
			if (remain[i] == remain[j]) {
				count--;
				break;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}
