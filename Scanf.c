#include <stdio.h>

int main()
{

	int value;
	float value2;

	printf("������ ���ڸ� �Է����ּ��� \n");
	scanf_s("%d", &value);
	printf("%d \n", value);

	printf("\n");

	printf("�Ǽ��� ���ڸ� �Է����ּ��� \n");
	scanf_s("%f", &value2);
	printf("%f \n", value2);

	printf("\n");

	printf("������, �Ǽ��� ���ڸ� �Է����ּ��� \n");
	scanf_s("%d %f", &value, &value2);
	printf("\n");
	printf("%d \n%f \n", value, value2);

} // main ����