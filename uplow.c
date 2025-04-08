#include <stdio.h>


int main(){
	
	char letter;
	printf("Enter a character: ");
	scanf("%c", &letter);
	if (letter >= 'A' && letter <= 'Z'){
		printf("%c is an uppercase alphabet\n", letter);
	
	}else if(letter >= 'a' && letter <= 'z'){
		printf("%c is lowercase alphabet\n", letter);
	}else{
		printf("%c is not an alphabet\n", letter);
	}

}
