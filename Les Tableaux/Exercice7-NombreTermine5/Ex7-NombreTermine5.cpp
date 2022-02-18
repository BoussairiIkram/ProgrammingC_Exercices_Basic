#include<stdio.h>
/*
Ecrire un programme qui demande un tableau de N valeurs entières (N au maximum égal à 30),
puis  Affiche tous les nombres qui se terminent par 5 .
*/

main(){
	int Tab[30];
	int N,i;
	
	do{
		printf("Donnez le nombre Totale d'element :");
		scanf("%d",&N);}
	while(N>30 || N<2);
	
	
	for(i=0;i<N;i++){
		printf("Donnez l'element Numero %d :",i+1);
		scanf("%d",&Tab[i]);
	}
	
	printf("Les Nombres qui se terminent par 5 sont :\n");
	
	for(i=0;i<N;i++)
      { if(Tab[i]%10==5) printf("%d  ",Tab[i]); }
	  		  
}

