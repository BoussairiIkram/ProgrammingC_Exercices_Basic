#include<stdio.h>
/*
Ecrire un programme qui détermine tous les diviseurs d'un nombre entier saisi ,plus grand que 1.
*/

main()
{
	int Nb,i;       
	
	printf("Donnez un Nombre:");
	scanf("%d",&Nb);
	
	printf("Les Deviseur de %d sont:",Nb);
	
	for(i=1;i<=Nb;i++){
	      if(Nb%i==0) 
		    printf("%d   ",i);
	}
	
}

