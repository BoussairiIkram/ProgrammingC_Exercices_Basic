#include<stdio.h>
/*
�crivez un programme pour saisir la longueur et la largeur d'un rectangle et 
calculer son p�rim�tre.
Remarque :P�rim�tre=2*( longueur+ largeur)
*/

main()
{
	float longueur, largeur, perimetre;

    printf("Saisir la longueur : ");
    scanf("%f", &longueur);
    
    printf("Saisir la largeur: ");
    scanf("%f", &largeur);

    perimetre = 2 * (longueur + largeur);

    printf("le perimetre = %f ", perimetre); 
}

