#include <stdio.h>
int main()
{
	char zm;
	printf("������һ��СдӢ����ĸ:");
	scanf("%c",&zm);
	printf("����ASCII����:%d\n",zm);
	zm = zm -'a'+'A';
	printf("���Ĵ�дӢ����ĸ��%c\n",zm);
	printf("��д��ĸ��ASCII����:%d",zm);
}
