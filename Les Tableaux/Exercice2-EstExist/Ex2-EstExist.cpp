#include<stdio.h>
#include<stdlib.h>
/*
Ecrire un programme pour chercher l'existence d'un nombre n dans un tableau de 10 entiers 
et affiche leur indice. 
*/

main() {
    int x,i,a=0;
    int T[10];
    
    printf("Donner les valeurs du tableau : \n");
    
    for(i=0;i<10;i++){
    	printf("T[%d] = ",i);
    	scanf("%d",&T[i]);}
    	
	printf("Donner le nombre à chercher: ");
	scanf("%d",&x);
	
	for(i=0;i<10;i++){
		if(T[i]==x){
		  printf("Le nombre %d existe dans l'indice : %d\n",x,i);
		  exit(0);}
	}
	
	printf("Le nombre %d n'existe pas dans le tableau ",x);	
      
}

