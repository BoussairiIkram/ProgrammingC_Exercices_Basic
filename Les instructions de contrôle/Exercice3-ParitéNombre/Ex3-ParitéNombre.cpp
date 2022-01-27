#include<stdio.h>
/*
Écrire un programme qui demande à l'utilisateur de saisir un nombres  puis affichera la parité .
*/

 main(){
 	
    int Nb;
    
    printf("Donnez un entier:");
    scanf("%d",&Nb);
    
    if(Nb%2==0){
      printf("%d est pair.\n",Nb);  }
	else {
	printf("%d est impair.\n",Nb); }
    
}

