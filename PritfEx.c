#include <stdio.h>

int main()
{
	// ���� ���
	printf("�ȳ��ϼ���! \n");
	printf("This is a computer \n");
	printf("C��� ������� - ������ȭ�� \n");
	
	printf("\n");

	// ���� ���� ���
	printf("C��� ������� - ������ȭ��");
	printf("C��� ������� - ������ȭ��");
	printf("C��� ������� - ������ȭ��");
	
	printf("\n");

	// ����� �׽�Ʈ
	printf("Hello World! \n"); // ���� �ٷ� ����
	printf("Hello World! \r"); // ���� ���� �� ������ �̵�
	printf("\n");
	printf("Hello World! \a"); // ���Ҹ� ���
	printf("\n");
	printf("Hello World! \t"); // tabŰ
	printf("\n");
	printf("Hello World! \\"); // '/'
	printf("\n");
	printf("Hello World! \'"); // ���� ����ǥ
	printf("\n");
	printf("Hello World! \""); // ū ����ǥ
	printf("\n");
	
	// ������ ���� ���
	int x = 5;
	int y = -100;
	printf("\n");
	printf("%d, %ld \n", x, y);
	printf("\n");

	// ������ ���� ���
	char ch = 'A';
	printf("%c \n", ch); // ���������� ���
	printf("%d \n", ch); // ���������� ���
	printf("\n");

	// �Ǽ��� ���
	printf("%f \n", 3.141592);
	printf("%e \n", 55.345); // �ε� �Ҽ���
	printf("%E \n", 55.345); // �ε� �Ҽ���


} // main ����