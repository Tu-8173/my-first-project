#include <stdio.h>
int main()
{
	int n;
	printf("请输入数字n：");
	scanf("%d",&n);
	if(n<=0||n>9){
		printf("这个数字？你不是在说笑话罢（恼）");
	}
	else{
		int i = 1;
		int j = 1;
		do{
			printf("%d*%d=%d ",i,j,i*j);
		if(i<j){
			i++;
		}
		else{
			j++;
			printf("\n");
			i =1; 
		}
		}while(j<=n);
		}
	 return 0;
 } 
