// check a character is a vowel or consonant

#include <stdio.h>
#include <conio.h>

int main(){
	
	char ch;
	
	printf("Enter a Character: ");
	scanf("%c",&ch);
	
	ch = tolower(ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		printf("%c is a vowel");
	}else{
		printf("%c is a consonant");
	}
	
	return 0;
}
