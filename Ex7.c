#include <stdio.h>

int main()
{

	double a = 0;
	double b = 0;

	double sum = 0;
	double average = 0;

	printf("�Ҽ��� ��� �׽�Ʈ �Դϴ�.\n");
	printf("�Ҽ����� ���Ե� 2���� ���� �Է����ּ���.\n");
	
	printf("\n");

	printf("ù ��° ���� �Է����ּ���.\n");
	scanf_s("%lf", &a);								//  ���ڿ��� �Է¹��� �� double���� ��� %lf�� ����Ѵ�.

	printf("�� ��° ���� �Է����ּ���.\n");
	scanf_s("%lf", &b);
	
	printf("\n");

	sum = a + b;			// �հ�
	average = sum / 2.;		// ���

	printf("�� ���� ���� : %f �̰�, \n", sum);
	printf("����� : %f �Դϴ�.", average);

} // main ����