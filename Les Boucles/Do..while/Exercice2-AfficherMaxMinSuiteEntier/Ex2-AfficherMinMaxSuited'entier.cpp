#include<stdio.h>
/*
Ecrire un programme qui affiche le plus grand et le plus petit d'une suite d'entiers saisis termin�e par 0.
Les nombres saisis ne sont pas conserv�s en m�moire .
*/

main(){
	
 int Nb,i,min=0,max=0;   

do{
 printf("Donnez un nombre : ");
 scanf("%d", &Nb);

   if(Nb>max) max=Nb; 
   if(Nb<min) min=Nb;
   
} while(Nb!=0);
 
 printf(" min=%d \t max=%d ",min,max);
 
}

