#include<stdio.h>
/*
Écrire un programme qui demande à l'utilisateur d'entrer un nombre et affiche ensuite le jour correspondant.
*/

 main(){
 	int jour;
 	
 	printf("Entrez un nombre: ");
 	scanf("%d",&jour);
 	
    switch(jour){
    	case 1: printf("Lundi");break;
    	case 2: printf("Mardi");break;
    	case 3: printf("Mercredi");break;
    	case 4: printf("Jeudi");break;
    	case 5: printf("Vendredi");break;
    	case 6: printf("Samedi");break;
    	case 7: printf("Dimanche");break;
    	default : printf("Error !!");
	}
 }

