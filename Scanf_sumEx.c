#include <stdio.h>

void main(void)
{

	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = 0;
	double average = 0;

	printf("���� ������ �Է��ϼ��� :");
	scanf_s("%d", &kor);

	printf("���� ������ �Է��ϼ��� :");
	scanf_s("%d", &eng);

	printf("���� ������ �Է��ϼ��� :");
	scanf_s("%d", &math);

	total = kor + eng + math;
	average = total / 3.;

	printf("�հ� ���� : %d\n", total);
	printf("��� ���� : %f\n", average);

} // main ����