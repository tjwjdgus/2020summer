#include<stdio.h>
#include<string.h>
typedef struct student {
	char name[10];
	int number;
	char department[20];
}Student;
int main(void) {
	Student person[5];
	for (int i = 0; i < 5; i++) {
		scanf("%s %d %s", person[i].name, &person[i].number, person[i].department);
	}
	int num;
	scanf("%d", &num);
	for (int i = 0; i < 5; i++) {
		if (num == person[i].number)
			printf("%s %d %s\n", person[i].name, person[i].number, person[i].department);
	}
	return 0;
}
