#include<stdio.h>
int main(void) {
	int h[3];
	int b[2];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &h[i]);
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &b[i]);
	}
	int hmin = h[0], bmin = b[0];
	for (int i = 0; i < 3; i++) {
		if (hmin > h[i])
			hmin = h[i];
	}
	for (int i = 0; i < 2; i++) {
		if (bmin > b[i])
			bmin = b[i];
	}
	printf("%d\n", hmin + bmin - 50);
	return 0;
}
