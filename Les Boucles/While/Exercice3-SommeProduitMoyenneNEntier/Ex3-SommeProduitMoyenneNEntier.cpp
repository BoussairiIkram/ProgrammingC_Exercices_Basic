#include<stdio.h>
/*
Ecrivez un programme qui lit N nombres entiers au clavier et qui affiche leur somme, 
leur produit et leur moyenne. Choisissez un type appropri� pour les valeurs � afficher.
Le nombre N est � entrer au clavier. 
*/

main()
{
 int N,Nb,i=1,Somme=0,Produit=1;       


 printf("Donnez le Nombre totale de donn�es : ");
 scanf("%d", &N);


 while(i<=N)
{
     printf("Donnez le nombre num�ro %d: ",i);
     scanf("%d", &Nb);
     
     Somme += Nb;
     Produit *= Nb;
     
     i++;
    }

 printf("La somme   des %d nombres est %d .\n", N, Somme);
 printf("Le produit des %d nombres est %d .\n", N, Produit);
 printf("La moyenne des %d nombres est %.4f .\n", N, (float)Somme/N);
}


