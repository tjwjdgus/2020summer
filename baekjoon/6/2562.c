#include<stdio.h>
int main(void) {
	int arr[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0],maxnum=1;
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxnum = i+1;
		}
	}
	printf("%d\n%d\n", max, maxnum);
	return 0;
}
