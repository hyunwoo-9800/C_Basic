#include <stdio.h>

int main()
{

	int grandFatherAge = 0;
	int grandMotherAge = 0;
	int fatherAge = 0;
	int motherAge = 0;
	int sisterAge = 0;
	int brotherAge = 0;
	int myAge = 0;

	int ageTotal = 0;

	printf("������ ���� �� ���ϱ� �Դϴ�. \n");
	printf("�Ҿƹ��� ���̸� �Է����ּ���. \n");
	scanf_s("%d", &grandFatherAge);

	printf("�ҸӴ� ���̸� �Է����ּ���. \n");
	scanf_s("%d", &grandMotherAge);

	printf("�ƹ��� ���̸� �Է����ּ���. \n");
	scanf_s("%d", &fatherAge);

	printf("��Ӵ� ���̸� �Է����ּ���. \n");
	scanf_s("%d", &motherAge);

	printf("����/������ ���̸� �Է����ּ���. \n");
	scanf_s("%d", &sisterAge);

	printf("��/������ ���̸� �Է����ּ���. \n");
	scanf_s("%d", &brotherAge);

	printf("�ڽ��� ���̸� �Է����ּ���. \n");
	scanf_s("%d", &myAge);

	ageTotal = grandFatherAge + grandMotherAge + fatherAge + motherAge + sisterAge + brotherAge + myAge;

	printf("���� : %d �Դϴ�.\n", ageTotal);

} // main ����