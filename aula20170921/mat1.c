#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	
	float x1, x2, y1, y2, dist;
	printf ("Insira a coordenada de x para o ponto A( x1, y1 ): \n");
	scanf("%f", &x1);
	printf("Insira a coordenada de y para o ponto A( x1, y1 ) : \n");
	scanf("%f", &y1);
	printf ("Insira a coordenada de x para o ponto B( x2, y2 ): \n");
	scanf("%f", &x2);
	printf ("Insira a coordenada de x para o ponto B( x2, y2 ) : \n");
	scanf("%f", &y2);
	
	dist = sqrt( pow (x2 - x1, 2) + pow (y2 - y1, 2));
	printf("\n\nA Distancia entre os pontos A e B eh \n\n"
	"\tA( %.1f, %.1f )\n"
           "\tB( %.1f, %.1f )\n\n"
           "\t\teh igual a %.3f!\n\n", x1, y1, x2, y2, dist);
           
    
	
	
	return 0;
}
