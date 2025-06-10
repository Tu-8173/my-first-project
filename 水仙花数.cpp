#include <stdio.h>
#include <math.h>
int main()
{
	printf("请输入一个正整数n:");
	int i,n;
	scanf("%d",&n);
	if(n>3&&n<7)
	{
	i=1;
	int a,b;
	a=1;b=1;
	while(i<n){
		b=b*10;
		i++;
	}
	//printf("%d",b);
	a=b;
	while(a<b*10){
		int c =a;
		int d =0;
		int j =i;
		while(c>0){
			d =d+pow(c%10,n);
			c=c/10;
		}if(a==d){
			printf("%d\n",a);
		}a++;
	}
}else{
	printf("这个数超出范围了罢（恼）");
}
 } 
