#include<stdio.h>
/*
)Écrire un programme qui demande à l'utilisateur de saisir quatre nombres entier 
puis  affichera la moyenne avec une précision de 3 chiffres après la virgule puis  affichera la moyenne.
Le programme ne devra utiliser que 2 variables.
*/

main(){
	int Nombre,Moyenne=0;

	printf("Donnez un nombre:");
	scanf("%d",&Nombre);
	    Moyenne+=Nombre;
  //  Moyenne+=Nombre <=> Moyenne=Moyenne+Nombre
	
	printf("Donnez un nombre:");
	scanf("%d",&Nombre);
	    Moyenne+=Nombre;
	
	printf("Donnez un nombre:");
	scanf("%d",&Nombre);
	    Moyenne+=Nombre;
	
	printf("Donnez un nombre:");
	scanf("%d",&Nombre);
	    Moyenne+=Nombre;
	
	printf("La moyenne =%.3f",(float)Moyenne/4); }

