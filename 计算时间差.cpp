#include <stdio.h>
int main()
{
	int h1,m1;
	int h2,m2;
	printf("�����һ��ʱ�䣺");
	scanf("%d %d", &h1, &m1); 
	printf("����ڶ���ʱ�䣺");
	scanf("%d %d", &h2, &m2); 
	int ch,cm;
	ch = h1-h2;
	cm = m1-m2;
	if(cm<0){
		cm=60+cm;
		ch--;
	}
	printf("ʱ�����%dʱ%d��",ch, cm);
	return 0;
 } 
