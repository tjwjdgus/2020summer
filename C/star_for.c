#include<stdio.h>
void star1(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf(" \n");
	}
}
//*
//**
//***
//****
//*****
void star2(void) {
	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf(" \n");
	}
}
//*****
//****
//***
//**
//*
void star3(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
}
//    *
//   **
//  ***
// ****
//*****
void star4(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < 5 - i; j++)
			printf("*");
		printf("\n");
	}
}
//*****
// ****
//  ***
//   **
//    *
void star5(void) {
	for (int i = 5; i > 0; i--) {
		for (int j = 1; j < i; j++)
			printf(" ");
		printf("*\n");
	}
}
//    *
//   *
//  *
// *
//*
void star6(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j < i; j++)
			printf(" ");
		printf("*\n");
	}
}
//*
// *
//  *
//   *
//    *
void star7(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
//    **
//   ****
//  ******
// ********
//**********
void star8(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
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
