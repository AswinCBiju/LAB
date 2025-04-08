# include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three sides of the triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b>c) && (b+c>a) && (a+c>b)){
		printf("It is a triangle\n");
	}
	else {
		printf("It is not a triangle....\n");
	}
	return 0;
}
