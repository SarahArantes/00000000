#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char frase[250];
	int i;
	printf("Digite a frase: \n");
	fgets (frase,250,stdin);
	
	for (i=0 ; i < 250 ; i++)
	   frase[i] = toupper (frase[i]);
       printf("Frase em maiusculas: %s \n\n", frase);
       
       
	
	
	
	return 0;
}
