#include <stdio.h>
void reverse_string(char*str){
          char temp;
          char *start=str;
          char *end=str;
          while(*end!='\0'){
          	end++;
		  }end--;
		  while(start<end){
		  	temp =*start;
		  	*start =*end;
		  	*end=temp;
		  	start++;
		  	end--;
		  }
		  
} int main(){
	char str[100];
	scanf("%s",&str);
	printf("修改前：%s\n",str);
	reverse_string(str);
	printf("修改后：%s\n",str);
}
