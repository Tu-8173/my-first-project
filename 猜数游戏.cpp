#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // 设置随机数种子
    srand(time(0));
	// 产生一个 1~100 的随机数
    int num = rand() % 100 + 1;
    int i,n,j;
    j=0;
	printf("请输入要猜的次数:");
	scanf("%d",&n);
	if(n<3){
    	printf("重输!!!");
    	return 0;
	}
	for( j=0;j<n;j++)
	{
	printf("请输入要猜的数字:");
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
	
