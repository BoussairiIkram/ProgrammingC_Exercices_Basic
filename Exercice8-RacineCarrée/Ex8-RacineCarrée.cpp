#include<stdio.h>
#include<Math.h>
/*
Écrivez un programme pour saisir un nombre et calculer sa racine carrée.
*/

main()
{
	float Nombre,Resultat;
	
	printf("Saisir un nombre : ");
	scanf("%f", &Nombre);
	
	Resultat = sqrt(Nombre);
	
	//sqrt est une fonction de math.h permet de calculer la valeur la racine carrée.
	
	printf("La racine carrEe du %.2f = %.2f .",Nombre,Resultat);

}

