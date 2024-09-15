#include <stdio.h>

int main()
{
	/*printf("呵呵\n");
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

//调整字体：按住ctrl，然后滑动鼠标的滚轮
//ctrl+k+c 注释
//ctrl+k+u 取消注释

