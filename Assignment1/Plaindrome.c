#include <stdio.h>
int main()
{
	int num = 243;
	int original = num;
	int digit, reverse = 0;
	
	 
	 while(num > 0){
	 	digit = num % 10;
	    reverse = reverse * 10 + digit;
	    num = num / 10;
	 }
	 	
	 	printf("Original num is %d\n",original);
	 	printf("Reverse num is %d",reverse);
	 
	 if(original == reverse){
	 	printf("\nPlaindrome");
	 }else{
	 	printf("\nNot Plaindrome");
	 }
	 
	 return 0;
}