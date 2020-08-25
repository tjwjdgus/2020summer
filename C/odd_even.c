#include<stdio.h>
void odd(int *a) {
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0)
			printf("%d ", a[i]);
	}
	printf("\n");
}
void even(int *a) {
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0)
			printf("%d ", a[i]);
	}
	printf("\n");
}
int main(void) {
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력 :");
		scanf("%d", &arr[i]);
	}
	odd(arr);
	even(arr);
	return 0;
}
