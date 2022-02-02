#include<stdio.h>
/*
Écrivez un programme pour entrer un nombre de l'utilisateur et comptez
le nombre de chiffres dans l'entier donné .
*/

main(){
	
   int Nb,i= 0;

    printf("Saisir un  nombre entier: ");
    scanf("%d",&Nb);
    
    if (Nb!=0){
		while(Nb!= 0){
	     Nb/=10; //  Nb=Nb/10
         i++;	}
    }
	else i=1; 
    

    printf("Nombre de chiffres : %d", i);
}

