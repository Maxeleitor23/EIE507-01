#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
	int S;
	float FA,C;
	printf("Cantidad de sonidos por minuto: \n");
	scanf("%i",&S);

		FA= S/4 + 40;
		C= (FA-32) * 5/9;
	printf("Su temperatura en grados celcuis es %f \n",C);
	return 0;
}
