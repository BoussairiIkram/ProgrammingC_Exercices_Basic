#include<stdio.h>
#include<math.h>
/*
Écrivez un programme qui demande à l'utilisateur d'entrer la base et l'exposant puis 
il calcule la puissance.
*/

main()
	{
	float Base,Exposant,Resultat;


    printf("Saisir la base : ");
    scanf("%f",&Base);
    
    printf("Saisir l'exposant : ");
    scanf("%f",&Exposant);


    Resultat= pow(Base,Exposant);

//pow est une fonction de math.h permet de calculer la valeur la puissance.

    printf("%.2f ^ %.2f = %.2f",Base,Exposant,Resultat);

}

