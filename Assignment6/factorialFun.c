#include <stdio.h>

int factorial();

int main(){
	
	factorial();
	
}

int factorial(){
	int num = 1;
	int fact = 1;
	
	while(num<=5){
		
		fact = fact * num;
	
			num++;
	
	}
		printf("factorial = %d",fact);
	return 0;
}