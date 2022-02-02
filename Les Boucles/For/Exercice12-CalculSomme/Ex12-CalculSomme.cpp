#include<stdio.h>
/*
Ecrire un programme qui permet de Calculer la somme suivante :
S= 1+X/1! + X^2/2! + X^3/3! + X^4/4! + ….. + X^n/n!
X et n sont des entiers donner par l'utilisateur.
*/
main(){
	int X,n,i,Fact=1,puissance=1;
	float Somme=1;     

    printf ("Donnez X : ");
    scanf ("%d", &X); 

	do{
	printf ("Donnez n : ");
	scanf ("%d", &n); }
	while(n<1);
	
	for(i=1;i<=n;i++){
		Fact*=i;     
		puissance*=X;  
		Somme+= (float) puissance/Fact;  
	  }

  printf("La somme est %f",Somme);
}

