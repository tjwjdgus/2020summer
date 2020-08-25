#include<stdio.h>
int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int*aptr = arr;
	int*bptr = &arr[5];
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (int i = 0; i < 3; i++) {
		int temp;
		temp = *aptr;
		*aptr = *bptr;
		*bptr = temp;
		aptr++;
		bptr--;
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
