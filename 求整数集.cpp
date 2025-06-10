#include <stdio.h>
int main()
{
	int A;
	printf("ÇëÊäÈëÊı×ÖA£º");
	scanf("%d",&A);
	int i,j,k,c;
	c=0;
	for(i=A;i<=A+3;i++){
			for(j=A;j<=A+3;j++){
					for(k=A;k<=A+3;k++){
						if(i!=j && i!=k && j!=k){
							printf("%d%d%d",i,j,k);
							c++;
							if(c==6){
								printf("\n");
								c=0;
							}else{
								printf(" ");
							}
						}
					}
			}
	}
	 
	return 0;
 } 
