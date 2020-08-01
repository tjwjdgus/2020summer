#include<stdio.h>
int main(void) {
	int n1,n2;
	scanf("%d%d", &n1,&n2);
	if (n1 > 0 && n2 > 0)
		printf("1\n");
	else if (n1 < 0 && n2 > 0)
		printf("2\n");
	else if (n1 < 0 && n2 < 0)
		printf("3\n");
	else
		printf("4\n");
	return 0;
}
