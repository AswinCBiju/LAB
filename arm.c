#include <stdio.h>
int main(){
	int a,n,d,s;
	printf("Enter number: ");
	scanf("%d",&n);
	s=0;
	a=n;
	while (n>0){
		d=n%10;
		s+=d*d*d;
		n=n/10;
	}
	if (s==a){
		printf("It is an armstrong number\n");
	}
	else {
		printf("It IS NOIT\n");
	}
}
