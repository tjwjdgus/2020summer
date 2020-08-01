#include<stdio.h>
int main(void) {
	int n1, n2;
	do{
		scanf("%d%d", &n1, &n2);
		if(n1 != 0 && n2 != 0)
			printf("%d\n", n1 + n2);
	} while (n1 != 0 && n2 != 0);
	return 0;
}
