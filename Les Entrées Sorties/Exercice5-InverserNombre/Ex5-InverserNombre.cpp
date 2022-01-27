#include<stdio.h>
/*
Ecrire un programme qui permet de lire en entrée un entier constitué de trois chiffres
et d'afficher celui-ci inversé.
Exemple: si l'entrée est 123 on affiche 321.
*/

main()
	{
	int Nb;
	
	printf("Entrer un nombre entier de troixchifres:");
	scanf("%d",&Nb);

    printf("L\'inverse de %d est : %d%d%d ",Nb,(Nb%100)%10,(Nb%100)/10,Nb/100); 

}

