#include<stdio.h>
/*
Ecrire un programme qui permet d'affiche la somme de tous les nombres pairs et impairs entre 1 et N.
*/

main()
{
	int Nb,i,SommeP=0,SommeI=0;  
     

do{
   printf("Donnez Un Nombre:");
   scanf("%d",&Nb);  }
while(Nb<0 );

 for(i=1;i<=Nb;i++)
    {
       if(i%2==0)  SommeP+=i; 
       else        SommeI+=i;
    }

  printf("La Somme des nombres pair est %d.\nLa Somme des nombres Impair est %d.",SommeP,SommeI);
}

