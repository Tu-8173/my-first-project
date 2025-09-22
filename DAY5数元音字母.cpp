#include <stdio.h>
#include <ctype.h>
int countVowels(const char *str)
{
	
	int i=0;
	const char* temp =str;
	while(*temp!='\0'){
		char c= tolower(*temp);
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			i++;
		}
		temp++;
		
	}return i;
	
 } int main()
 {
 	char arr1[100];
	 fgets(arr1,sizeof(arr1),stdin);
	  int count  =countVowels(arr1);
	  printf("%d",count);
	  return 0;
 }
