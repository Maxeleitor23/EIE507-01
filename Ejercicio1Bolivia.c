#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 
 int CAT;
 int CLA;
 int ANT;
 int RES;  // 3 variables enteras
 float SAL; //unica variable real
 int main()
 {
 	printf("Ingrese Categoría del trabajador \n");
 	scanf( "%d" ,&CAT);
 	printf("Ingrese Clave del trabajador \n");
 	scanf( "%d" ,&CLA);
 	printf("Ingrese Antiguedad del trabajador \n");
 	scanf("%d",&ANT);
 	
   
 if((CAT==3)||(CAT==4)&&(ANT>5))
 {
 			if(ANT>5)
 				{
 				RES=1;
 				}	
 			else
 				{
 				RES=0;
 				}

 }				

 else{ if((CAT==2)&&(ANT>7))
 		{
 		RES=1;
 		}
 		else{ RES=0;}}

if (RES==1)
{
	printf("Usted si reune las condiciones para el puesto de trabajo\n");}
	else
		{printf("Usted no reune las condiciones\n");

	}
  			 
  
  return 0;
}