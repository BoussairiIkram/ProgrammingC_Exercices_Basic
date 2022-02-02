#include<stdio.h>
/*
Ecrire un programme qui permet de Calculer la somme des N premiers termes de 
la série harmonique : 1 + 1/2 + 1/3 + ... + 1/N
*/

main()
{
  int Nb,i;
  float Somme=1;     
	
	do{
	printf ("Nombre de termes: ");
	scanf ("%d", &Nb); }
	while (Nb<1);

 for (i=2; i<=Nb ; i++)
   Somme += (float)1/i;
  
  
  printf("La somme des %d premiers termes est %f",Nb,Somme);
}


