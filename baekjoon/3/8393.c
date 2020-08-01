#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int sum = 0;
	for (;num!=0 ; num--) {
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}
