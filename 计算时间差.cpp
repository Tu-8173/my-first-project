#include <stdio.h>
int main()
{
	int h1,m1;
	int h2,m2;
	printf("输入第一个时间：");
	scanf("%d %d", &h1, &m1); 
	printf("输入第二个时间：");
	scanf("%d %d", &h2, &m2); 
	int ch,cm;
	ch = h1-h2;
	cm = m1-m2;
	if(cm<0){
		cm=60+cm;
		ch--;
	}
	printf("时间差是%d时%d分",ch, cm);
	return 0;
 } 
