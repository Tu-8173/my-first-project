#include <stdio.h>
int main()
{
	int arr[5];
	int n,j,h=0;
	for(int i=0;i<5;i++){
		scanf("%d",&n);
		arr[i]=n;
		j+=n;
	}
	int g =j/5;
   for(int k=0;k<5;k++){
   	if(arr[k]>g){
   		h++;
	   }
   }
   printf("ƽ����:%f\n",g);
   printf("����ƽ���ֵ�����:%d",h);
   return 0;
 } 
