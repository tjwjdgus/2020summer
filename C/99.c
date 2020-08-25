#include<stdio.h>
int main(void) {
	int i, j;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i * 10 + j + j * 10 + i == 99)
				printf("%d%d+%d%d=%d\n", i,j, j,i,99);
		}
	}
	return 0;
}
