#include<stdio.h>

int main(void)
{
	int len	,wide	,high;

	printf("任意の立方体の体積を計算します。\n長さ、幅、高さをそれぞれ入力してください。\n");

	printf("長さを整数で入力してenterキーを押してください。\n");
	scanf_s("%d cm", &len);

	printf("幅を整数で入力してenterキーを押してください。\n");
	scanf_s("%d cm", &wide);

	printf("高さを整数で入力してenterキーを押してください。\n計算結果が出力されます。\n");
	scanf_s("%d cm", &high);

	printf("長さ、幅、高さはそれぞれ%d,%d,%dです。\n", len, wide, high);
		
	printf("体積は%d cm3です。", len * wide * high);

	return	0;
}