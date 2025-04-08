#include <stdio.h>
#include <string.h>
void revstr(char str[]){
	int n=strlen(str);
	int l=0,u=n-1;
	char temp;
	while (l<u){
		temp=str[l];
		str[l]=str[u];
		str[u]=temp;
		l++;u--;
	}
}
int main(){
	int n;
	char str[100];
	printf("Enter your string: ");
	scanf("%[^\n]",&str);
	revstr(str);
	printf("Reversed string: %s\n",str);
	return 0;
}
