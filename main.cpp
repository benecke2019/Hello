#include <stdio.h>

int main(void)
{
	int a = 0;

	scanf("%d", &a);

	if (a > 0)
		printf("'a'�� ����Դϴ�.\n");
	else if (a == 0)
		printf("'a'�� 0�Դϴ�.\n");
	else
		printf("'a'�� �����Դϴ�.\n");

	return 0;
}