#include<stdio.h>
int main(void) {
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	int total = n1 * n2*n3;
	int count[10] = {0,0,0,0,0,0,0,0,0,0};
	while (1) {
		int remain = total % 10;
		switch (remain) {
		case 0:
			count[0]++;
			break;
		case 1:
			count[1]++;
			break;
		case 2:
			count[2]++;
			break;
		case 3:
			count[3]++;
			break;
		case 4:
			count[4]++;
			break;
		case 5:
			count[5]++;
			break;
		case 6:
			count[6]++;
			break;
		case 7:
			count[7]++;
			break;
		case 8:
			count[8]++;
			break;
		case 9:
			count[9]++;
			break;
		}
		total = total / 10;
		if (total == 0) break;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	return 0;
}
