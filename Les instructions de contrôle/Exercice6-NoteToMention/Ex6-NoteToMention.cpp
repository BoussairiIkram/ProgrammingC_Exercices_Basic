#include<stdio.h>
/*
Ecrire un programme qui demande à l'utilisateur de saisir une note puis affichera la mention.
*/

 main(){
 	float Note;
 	
 	printf("Donnez Votre Note: ");
 	scanf("%f",&Note);
 	
 	if(Note>20 || Note<0)
 	   printf("Error !!");
 	else if(Note>=18)
 	   printf("Exellent.");
	else if(Note>=16)
		printf("Tres bien.");
	else if(Note>=14)
	    printf("bien.");
	else if (Note>=12)
	    printf("Assez bien.");
	else if (Note>=10)
	printf("Passable.");
	else
	printf("Rattrapage");

 }

