#include <stdio.h>

int main()
{
	/*printf("�Ǻ�\n");
	printf("hehe\n");
	printf("%d\n", 100);*/
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		printf("%c ", i);
		if (i % 16 == 15)
			printf("\n");
	}
	return 0;
}

//�������壺��סctrl��Ȼ�󻬶����Ĺ���
//ctrl+k+c ע��
//ctrl+k+u ȡ��ע��

