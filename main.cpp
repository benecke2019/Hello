#include <stdio.h>

int main(void)
{
	int a = 0;
	float b = 0;
	char type;

	for (;;)
	{
		printf("data type을 입력하세요 (I/F):");
		scanf("%c", &type);

		if (type == 'Q')
			break;
		else if (type == 'I')
		{
			scanf("%d", &a);
			if (a > 0)
				printf("'a'가 양수입니다.\n");
			else if (a == 0)
				printf("'a'가 0입니다.\n");
			else
				printf("'a'가 음수입니다.\n");
		}
		else if (type == 'F')
		{
			scanf("%f", &b);
			if (b > 0)
				printf("'b'가 양수입니다.\n");
			else if (b == 0)
				printf("'b'가 0입니다.\n");
			else
				printf("'b'가 음수입니다.\n");
		}
		else
			printf("Wrong type!\n");
	}
	return 0;
}