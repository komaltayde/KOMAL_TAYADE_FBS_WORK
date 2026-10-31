#include <stdio.h>
int main()
{
	int num = 15;
	
	if(num%3==0 && num%5==0){
		printf("%d divisible by both");
		
	} 
	 else if(num%3==0)
	{
		printf("%d divisible by 3");
	}
	 else if(num%5==0);
	{
		printf("%d divisible by 5");
	}
	
}