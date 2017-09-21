#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*conversao de minusculas para maiusculas */

int main ()

{
	char frase[250];
	int i;
	printf("Digite a frase: \n");
	fgets (frase,250,stdin);
	
	for (i=0 ; i < 250 ; i++)
	   frase[i] = tolower (frase[i]);
       printf("Frase em minusculas: %s \n\n", frase);
       
 
	
	return 0;
	
}
