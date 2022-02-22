#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	/*
	<ctype.h> - biblioteca testa grupos de caractere
	toupper(c) - deixa o C maiusculo
	*/
	char c;
	
	printf("Didite um caracter em letra minuscula: ");
	scanf("%c", &c);
	if(c>= 'a'){
		printf("segue a letra que vc digitou: %c", toupper(c));
	}
	return 0;
}
