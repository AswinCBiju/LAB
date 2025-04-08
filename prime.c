#include <stdio.h>

int main(){
	
	int number, flag = 0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number <= 1){
		flag = 1;
	}else if(number == 2){
	
		flag = 0;
	}else{
	for (int i = 2; i <= number/2 + 1; i++){
		if (number % i == 0){
			flag = 1;
			break;		
		}
	
	}
	}
	if (flag == 0){
		printf("%d is a prime number\n", number);
		
	
	}else{
		printf("%d is not a prime number\n", number);
	
	}


	return 0;
}
