#include <stdio.h>
int main()
{
	int num;
	printf("������һ��������"); 
	scanf("%d",&num);
	int jdz = (num^(num>>31))-(num>>31);
	printf("����ֵ��%d\n",jdz);
	if(num>=0){
		printf("%d������",num);
	} else{
		printf("%d�Ǹ���",num);
	}
if(num%2==0){
		printf("����ż��\n");
	} else{
		printf("��������\n");
	}
	int awqf = num^0xFF;
	printf("�Ͱ�λȡ����ʮ���ƣ�%d\n",awqf);
	printf("�Ͱ�λȡ����ʮ�����ƣ�0x%02x",awqf);
	return 0; 
}
