#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个整数："); 
	scanf("%d",&num);
	int jdz = (num^(num>>31))-(num>>31);
	printf("绝对值：%d\n",jdz);
	if(num>=0){
		printf("%d是正数",num);
	} else{
		printf("%d是负数",num);
	}
if(num%2==0){
		printf("且是偶数\n");
	} else{
		printf("且是奇数\n");
	}
	int awqf = num^0xFF;
	printf("低八位取反的十进制：%d\n",awqf);
	printf("低八位取反的十六进制：0x%02x",awqf);
	return 0; 
}
