#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int X[100],i,j,o,p;
	int x=0;
	int n=p;
	int act, dist=100, sum,prom;
	double desviacion,varianza,var;

	printf("Notas de alumnos \n");
	for(i>=1;i<=dist;i++);
	{
		X[i]=(rand()%61+10);
	}
		for(j>=1;j<=dist;j++)
		{
			printf("Estudiante[%d] = %d\n",j,X[j]);
		}
	for (x=1;x<=dist;x++)
	{
		act=X[x];
		sum=sum+act;
	}
	prom=sum/dist;

	for(i=1;i<=dist;i++)
	{
		varianza =varianza + (pow((X[i]-prom),2));
	}
	var=varianza/(dist);
	desviacion=sqrt(var);

	for(i=0;i<=dist;i++)
	{
		p=0;
		for(int j=0;j<=dist;j++)
		{
			if(X[i]==X[j] && i!=j)
			{
				p=p+1;
			}
		}
		if(p>=n)
		{
			n*p;
			o=i;
		}
	}
	printf(" Promedio = %d\n",prom);
	printf(" Varianza = %.3f\n",var);
	printf(" Desviación estándar = %.3f\n",desviacion);
	printf(" Moda = %d \n",X[o]);
	printf(" Moda se repite %d veces \n", n+1);

	return 0;

	
}