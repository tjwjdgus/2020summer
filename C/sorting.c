#include<stdio.h>
void ascending(int *a, int size) {
	int temp=0;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size-j-1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i]= a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
}
int main(void) {
	int arr[9];
	int size = sizeof(arr) / sizeof(int);
	printf("정렬전 배열: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	ascending(arr, size);
	return 0;
}
/*배열 값을 매개변수로 받아서 오름차순으로 정렬하는 함수를 만드시오. 함수명은 ascending()이고 1차원 포인터와 배열의 크기를 매개변수로 받는다. 
오름차순 정렬의 예는 다음과 같습니다.  정렬전 배열: 10, 20, 3, 7, 4, 30, 11, 21, 8 오름차순 정렬후 배열: 3, 4, 7, 8, 10, 11, 20, 21, 30*/
