#include<stdio.h>
/*
Ecrire un programme qui calcule le pgcd d'un nombre donné par l'utilisateur.
*/

main(){
	int Nb,i,pgcd;

  do{	
	printf("Donnez un nombre :");
	scanf("%d",&Nb);}
  while(Nb<0);

  for(i=1;i<Nb;i++){
     if(Nb%i==0) pgcd=i; }  
     
  printf("pgsd de %d est %d .",Nb,pgcd);	
}

