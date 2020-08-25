#include<stdio.h>
void high_subject(int k, int e, int m) {
	if (k > e) {
		if (k > m)
			printf("평균이 가장 높은 과목:국어 /평균:%d\n", k);
		else
			printf("평균이 가장 높은 과목:수학 /평균:%d\n", m);
	}
	else {
		if (e > m)
			printf("평균이 가장 높은 과목:영어 /평균:%d\n", e);
		else
			printf("평균이 가장 높은 과목:수학 /평균:%d\n", m);
	}
}
void high_student(int *k,int *e,int *m) {
	int total[3];
	int max = 0;
	for (int i = 0; i < 3; i++) {
		total[i] = k[i] + e[i] + m[i];
		if (max < total[i])
			max = total[i];
	}
	if (max == total[0])
		printf("철수\n");
	else if (max == total[1])
		printf("민수\n");
	else
		printf("영희\n");

}
int main(void) {
	int kor[3];
	int eng[3];
	int math[3];
	int kor_sum = 0, eng_sum = 0, math_sum = 0;
	printf("철수, 민수, 영희의 국어점수를 순서대로 입력하시오\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &kor[i]);
		kor_sum += kor[i];
	}
	printf("철수, 민수, 영희의 영어점수를 순서대로 입력하시오\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &eng[i]);
		eng_sum += eng[i];
	}
	printf("철수, 민수, 영희의 수학점수를 순서대로 입력하시오\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &math[i]);
		math_sum += math[i];
	}
	int kor_avg = kor_sum / 3, eng_avg = eng_sum / 3, math_avg = math_sum / 3;
	printf("평균(국어:%d /영어:%d /수학:%d)\n", kor_avg, eng_avg, math_avg);
	high_subject(kor_avg, eng_avg, math_avg);
	high_student(kor, eng, math);
	return 0;
}
/*철수, 민수, 영희의 국어, 영어, 수학 점수를 각각 입력받아, kor, eng, math의 1차원 배열로 저장한 
(각 배열의 첫 번째는 철수, 두번째는 민수 , 세번째는 영희로 한다) 
뒤 세 과목의 평균을 각각 구하고, 평균이 가장 높은 과목의 평균 점수를 출력하는 함수를 작성하시오. 
그리고 세 과목 의 합이 가장 높은 학생의 이름을 출력하는 함수도 작성하시오. 뒤의 함 수에서 매개변수는 모두 포인터 변수여야 합니다. */
