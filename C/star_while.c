#include<stdio.h>
void star1(void) {
	int i = 1, j = 0;
	while (i <= 5) {
		while (j < i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}
//*
//**
//***
//****
//*****
void star2(void) {
	int i = 5, j = 0;
	while (i >= 0) {
		while (j < i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
		i--;
	}
}
//*****
//****
//***
//**
//*
void star3(void) {
	int i = 0, j = 0;
	while (i < 5) {
		while (j < 4 - i) {
			printf(" ");
			j++;
		}
		j = 0;
		while (j <= i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}
//    *
//   **
//  ***
// ****
//*****
void star4(void) {
	int i = 0, j = 0;
	while (i < 5) {
		while (j < i) {
			printf(" ");
			j++;
		}
		j = 0;
		while (j < 5 - i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}
//*****
// ****
//  ***
//   **
//    *
void star5(void) {
	int i = 5, j = 0;
	while (i >= 0) {
		while (j < i) {
			printf(" ");
			j++;
		}
		j = 0;
		printf("*\n");
		i--;
	}
}
//    *
//   *
//  *
// *
//*
void star6(void) {
	int i = 1, j = 1;
	while (i <= 5) {
		while (j < i) {
			printf(" ");
			j++;
		}
		j = 0;
		printf("*\n");
		i++;
	}
}
//*
// *
//  *
//   *
//    *
void star7(void) {
	int i = 0, j = 0;
	while (i < 5) {
		while (j < 4 - i) {
			printf(" ");
			j++;
		}
		j = 0;
		while (j <= i) {
			printf("*");
			j++;
		}
		j = 0;
		while (j <= i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}
//    **
//   ****
//  ******
// ********
//**********
void star8(void) {
	int i = 0, j = 0;
	while (i < 5) {
		while (j < 4 - i) {
			printf(" ");
			j++;
		}
		j = 0;
		while (j <= i) {
			printf("*");
			j++;
		}
		j = 0;
		while (j < i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}
//    *
//   ***
//  *****
// *******
//*********
int main(void) {
	int num;
	while (1) {
		printf("1,2,3,4,5,6,7,8(종료 0) : ");
		scanf("%d", &num);
		switch (num) {
		case 1:
			star1();
			break;
		case 2:
			star2();
			break;
		case 3:
			star3();
			break;
		case 4:
			star4();
			break;
		case 5:
			star5();
			break;
		case 6:
			star6();
			break;
		case 7:
			star7();
			break;
		case 8:
			star8();
			break;
		case 0:
			return 0;
		}
		printf("\n");
	}
}
