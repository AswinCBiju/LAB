#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	printf("Enter your string: ");
	scanf("%s",s);
	char a[20];
	strcpy(a,s);
	int l=0; 
	int u=strlen(s)-1;
	while (l<u){
		char t=s[u];
		s[u]=s[l];
		s[l]=t;
		l++;
		u--;
	}
	if (strcmp(a,s)==0){
		printf("String palindrome\n");
	}
	else {
		printf("Not a palindrome..\n");	
	}
	return 0;
}
