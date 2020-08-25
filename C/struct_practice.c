#include<stdio.h>
typedef struct employee {
	char name[10];
	int birth;
	int salary;
}Employee;
int main(void) {
	Employee person[3];
	for (int i = 0; i < 3; i++)
		scanf("%s %d %d", person[i].name, &person[i].birth, &person[i].salary);
	int sum=0;
	for (int i = 0; i < 3; i++)
		sum += person[i].salary;
	printf("평균 급여 : %f\n", (double)sum / 3);
	Employee p;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (person[j].salary < person[j + 1].salary) {
				p = person[j];
				person[j] = person[j + 1];
				person[j + 1] = p;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%s %d %d\n", person[i].name, person[i].birth, person[i].salary);
	}
	return 0;
}	
