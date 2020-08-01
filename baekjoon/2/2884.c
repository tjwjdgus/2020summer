#include<stdio.h>
int main(void) {
	int H,M;
	scanf("%d%d", &H,&M);
	if (M >= 45)
		printf("%d %d\n", H, M - 45);
	else {
		if (H == 0)
			printf("%d %d\n", 23, M + 60 - 45);
		else
			printf("%d %d\n", H - 1, M + 60 - 45);
	}
	return 0;
}
