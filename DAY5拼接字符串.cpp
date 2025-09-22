#include <stdio.h>
void StringConcat(char *dest,const char *src){
	while(*dest!=0){
		*dest++;
	}
	while(*src!=0){
		*dest=*src;
		*dest++;
		*src++;
	}*dest='\0';
}
int main()
{
	char arr1[100];
	char arr2[100];
	scanf("%s",arr1);
	scanf("%s",arr2);
	StringConcat(arr1,arr2);
	printf("%s",arr1);
}

