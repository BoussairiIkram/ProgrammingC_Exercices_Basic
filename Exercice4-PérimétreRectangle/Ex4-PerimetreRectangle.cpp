#include<stdio.h>
/*
Écrivez un programme pour saisir la longueur et la largeur d'un rectangle et 
calculer son périmètre.
Remarque :Périmètre=2*( longueur+ largeur)
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

