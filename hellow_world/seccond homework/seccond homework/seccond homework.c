#include<stdio.h>

int main(void)
{
	printf("表示する数字は99\n");		//	\nで改行、この99は文字としての99
	printf("表示する数字は%d",99);	//	この99は数字としての99
	return 0;
}