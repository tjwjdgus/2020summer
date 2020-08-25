#include<stdio.h>
int main(void) {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0], sum = 0;
	for (int i = 0; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
		sum += arr[i];
	}
	printf("max=%d / min=%d / sum=%d", max, min, sum);
	return 0;
}
