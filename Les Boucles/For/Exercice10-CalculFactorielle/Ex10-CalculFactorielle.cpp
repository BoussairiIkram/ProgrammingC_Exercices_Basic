#include<stdio.h>
/*
Ecrire un programme qui permet de Calculez la factorielle. 
N! = 1*2*3*...*(N-1)*N avec 0!=1.
*/
main()
{
    int Nb,i,Fact=1;

 
	do{
	printf("Saisir Un nombre : ");
	scanf("%d", &Nb);}
	while(Nb<0);

   for(i=2;i<=Nb;i++)
     Fact*=i; 

  printf("%d! = %d",Nb,Fact);  
  
}

