#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // �������������
    srand(time(0));
	// ����һ�� 1~100 �������
    int num = rand() % 100 + 1;
    int i,n,j;
    j=0;
	printf("������Ҫ�µĴ���:");
	scanf("%d",&n);
	if(n<3){
    	printf("����!!!");
    	return 0;
	}
	for( j=0;j<n;j++)
	{
	printf("������Ҫ�µ�����:");
	scanf("%d",&i);if(i>num){
	printf("Too big\n");
	continue;
	}
	else if(i<num){
	printf("Too small\n");
	continue;
	}
	else if(i<0){
		break;
	}
	else if(i==num)
	{
		printf("Bingo!\n");
		break;
	}
	}
	if(j<=3&&i>=0){
		printf("Lucky You!\n");
	}
	else if(j>3&&j<n&&i>=0){
		printf("Good Guess!\n");
	}else{
		printf("Game Over...\n");
	}
    return 0;
}
	
