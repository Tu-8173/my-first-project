#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[100],arr2[100];
	int a;
    fgets(arr1,sizeof(arr1),stdin);
    if(arr1[strlen(arr1)-1]=='\n'){
    	arr1[strlen(arr1)-1]='\0';
	}
	a=strlen(arr1);
	for(int i=0;i<a;i++){
		
			arr2[i]=arr1[a-1-i];
			arr2[a]='\0';
		
	}printf("%s",arr2); 
	 return 0;
 } 
