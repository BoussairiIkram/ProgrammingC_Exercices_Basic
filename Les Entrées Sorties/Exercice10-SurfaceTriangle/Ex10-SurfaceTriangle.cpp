#include<stdio.h>
/*
Écrivez un programme pour saisir la base et la hauteur d'un triangle et 
trouver la surface du triangle donné.
*/

main()
	{
	float base, hauteur, surface;
	
	printf("Saisir la base : ");
	scanf("%f", &base);
	
	printf("Saisir la hauteur: ");
	scanf("%f", &hauteur);
	
	surface = (base * hauteur) / 2;
	
	printf("La surface est = %.2f", surface); 
}

