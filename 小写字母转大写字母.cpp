#include <stdio.h>
int main()
{
	char zm;
	printf("请输入一个小写英文字母:");
	scanf("%c",&zm);
	printf("它的ASCII码是:%d\n",zm);
	zm = zm -'a'+'A';
	printf("它的大写英文字母是%c\n",zm);
	printf("大写字母的ASCII码是:%d",zm);
}
