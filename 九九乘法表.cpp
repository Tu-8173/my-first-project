#include <stdio.h>
int main()
{
	int n;
	printf("����������n��");
	scanf("%d",&n);
	if(n<=0||n>9){
		printf("������֣��㲻����˵Ц���գ��գ�");
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
