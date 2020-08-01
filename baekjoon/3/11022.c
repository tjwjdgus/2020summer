#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int n1, n2;
	for (int i=1; i<=num; i++) {
		scanf("%d%d", &n1, &n2);
		printf("Case #%d: %d + %d = %d\n",i,n1,n2, n1 + n2);
	}
	return 0;
}
