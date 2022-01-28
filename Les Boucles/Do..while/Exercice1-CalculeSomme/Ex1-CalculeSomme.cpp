#include<stdio.h>
/*
Ecrire un programme qui permet de calculer la somme des entiers
saisi par l'utilisateur tant qu'il n'a pas saisi la valeur -5.
*/

main(){
    int Nb,Somme=0;

do{
	printf("Donnez un entier:");
	scanf("%d",&Nb);
	
	    Somme+=Nb; }
	    
	while(Nb!=-5);
	
	printf("La somme est %d",Somme+5);
	
}

