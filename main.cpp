#include <stdio.h>

int main(void)
{
	int a = 0;

	scanf("%d", &a);

	if (a > 0)
		printf("'a'가 양수입니다.\n");
	else if (a == 0)
		printf("'a'가 0입니다.\n");
	else
		printf("'a'가 음수입니다.\n");

	return 0;
}