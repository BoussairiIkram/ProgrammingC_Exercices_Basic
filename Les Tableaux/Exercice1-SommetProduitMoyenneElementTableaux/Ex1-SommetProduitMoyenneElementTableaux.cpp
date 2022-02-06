#include<stdio.h>
/*
Ecrire un programme qui demande à l'utilisateur de saisir 10 réels stockés dans un tableau, 
le programme calcule et affiche la somme, le produit et la moyenne des éléments du tableau.
*/

int main() {
   float T[10];
   int i;
   float S=0,P=1;
   
   printf("Veuillez saisir les elements du tableau \n");
   
   for(i=0;i<10;i++){
   	printf("T[%d] = ",i);
   	scanf("%f",&T[i]);}
	 
	for(i=0;i<10;i++){
	 	S+= T[i];
	 	P*= T[i]; }
	 	
	 
	 printf("La somme des elements du tableau est : %.2f \n",S);
	 printf("Le produit des elements du tableau est : %.2f \n",P);
	 printf("La moyenne des elements du tableau est : %.2f \n",(float)S/10);
      
}

