#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{
	char frase[250];
	int i, contador;
	printf("Digite uma frase: \n");
	fgets(frase, 250, stdin);
	
	for (i = contador = 0; frase[i] != '\0'; i++)
	{
       if ( isalpha(frase[i]))
           contador++;
    }
	
	 printf("Numero de letras em sua frase: %d ", contador);
	 return contador;
	
	
	return 0;
}
