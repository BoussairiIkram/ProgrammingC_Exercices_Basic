#include<stdio.h>
/*
�crire un programme qui demande � l'utilisateur d'entrer un nombre et affiche ensuite leur table
de multiplication.
*/

main()
{
	int Nb,i;       
	
	printf("Donnez un Nombre:");
	scanf("%d",&Nb);
	
	for(i=0;i<=10;i++){
	    printf("%d*%d = %d\n",Nb,i,i*Nb);  }
	    
}




