#include<stdio.h>
#include<string.h>
void AsSort(int arr[7], int len) {
	int temp;
	for (int j = 0; j < len; j++) {
		for (int i = 0; i < len - j - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	printf("Ascending ");
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void DesSort(int arr[7], int len) {
	int temp;
	for (int j = 0; j < len; j++) {
		for (int i = 0; i < len -j -1; i++) {
			if (arr[i] < arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	printf("Descending ");
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main(void) {
	int arr[7];
	int len = sizeof(arr)/sizeof(int);
	printf("길이: %d\n", len);
	for (int i = 0; i < len; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);

	}
	printf("before ");
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
	AsSort(arr, len);
	DesSort(arr, len);
	return 0;
}
