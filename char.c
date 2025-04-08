#include <stdio.h>

int main(){
	char symbol;
	
	printf("Enter a character: ");
	scanf("%c", &symbol);
	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')){
		printf("%c is an alphabet\n", symbol);
	}else if (symbol >= '1' && symbol <= '9'){
		printf("%c is a digit\n", symbol);
	}else{
		printf("%c is a special character\n", symbol);
	
	}

	return 0;
}
