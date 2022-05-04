/*
 ============================================================================
 Name        : manejoDeCaracteres.c
 Author      : Emanuel Lucangioli
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void) {

	int c;

	while ((c=getchar()) != EOF )
	{
		if (islower(c))
		{
			putchar(toupper(c));
		}
		else if (isupper(c))
		{
			putchar(tolower(c));
		}
		else if (ispunct(c))
		{
			putchar(c);
		}
		else{
			//Como ya cubri todos los casos que pedia, solamente me queda excluir los numeros
		}



	}

	return EXIT_SUCCESS;
}