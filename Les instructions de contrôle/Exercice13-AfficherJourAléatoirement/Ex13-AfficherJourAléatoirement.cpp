#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
Ecrire un programme  qui affiche d'une manière aléatoire un des jours de la semaine.
*/

main()
	{
	    int a;
	    
	    srand(time(NULL));
	    
	    a = rand()%7;
	    
	    switch(a)
	    {
	         case 0: printf("Lundi\n"); break;
	         case 1: printf("Mardi\n"); break;
	         case 2: printf("Mercredi\n"); break;
             case 3: printf("Jeudi\n");    break;
	         case 4: printf("Vendredi\n");break;
	         case 5: printf("Samedi\n");  break;
	         case 6: printf("Dimanche\n");break;
	    }

}



