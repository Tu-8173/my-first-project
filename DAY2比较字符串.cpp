#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[100],arr2[100];
	fgets(arr1,sizeof(arr1),stdin);
	if(arr1[strlen(arr1)-1]=='\n'){
		arr1[strlen(arr1)-1]='\0';
	}
	int a=strlen(arr1);
	fgets(arr2,sizeof(arr2),stdin);
	if(arr2[strlen(arr2)-1]=='\n'){
		arr2[strlen(arr2)-1]='\0';
	}
	int b=strlen(arr2);
	int c=(a<b)?a:b;
	for(int i=0;i<c;i++){
		if(arr1[i]>arr2[i]){
			printf("1");
		    return 0;
		}
		else if(arr1[i]<arr2[i]){
			printf("-1");
			return 0;
		}
		
	}if(a>b){
			printf("1");
		}
			else if(a<b){
			printf("-1");
		}
			else{
			
			printf("0");
		}
		return 0;
}
