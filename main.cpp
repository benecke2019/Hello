#include <stdio.h>

int main(void)
{
	int a = 0;
	float b = 0;
	char type;

	printf("data type�� �Է��ϼ��� (I/F):");
	scanf("%c", &type);
	
	if (type == 'I')
	{
		scanf("%d", &a);
		if (a > 0)
			printf("'a'�� ����Դϴ�.\n");
		else if (a == 0)
			printf("'a'�� 0�Դϴ�.\n");
		else
			printf("'a'�� �����Դϴ�.\n");
	}
	else
	{
		scanf("%f", &b);
		if (b > 0)
			printf("'b'�� ����Դϴ�.\n");
		else if (b == 0)
			printf("'b'�� 0�Դϴ�.\n");
		else
			printf("'b'�� �����Դϴ�.\n");
	}


	return 0;
}