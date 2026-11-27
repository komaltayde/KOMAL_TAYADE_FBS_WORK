#include <stdio.h>
void VowelOrConstFun();

void main(){
	
  VowelOrConstFun();
	
}

void VowelOrConstFun(){
	 char ch;
	 printf("Enter The Char ");
	 scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U'){
		printf("Vowel");
   } else{
   	 printf("Consonant");
   }

    return 0;
}