#include<stdio.h>
/*
�crire un programme qui demande � l'utilisateur de saisir un nombres  puis affichera la parit� .
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

