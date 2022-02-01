#include<stdio.h>
/*
Ecrivez un programme qui lit N nombres entiers au clavier et qui affiche leur somme, 
leur produit et leur moyenne. Choisissez un type approprié pour les valeurs à afficher.
Le nombre N est à entrer au clavier. 
*/

main()
{
 int N,Nb,i,Somme=0,Produit=1;       


 printf("Donnez le Nombre de données : ");
 scanf("%d", &N);


 for(i=1;i<=N;i++)
{
     printf("Donnez le nombre numéro %d: ",i);
     scanf("%d", &Nb);
     
     Somme += Nb;
     Produit *= Nb;
    }

 printf("La somme   des %d nombres est %d .\n", N, Somme);
 printf("Le produit des %d nombres est %d .\n", N, Produit);
 printf("La moyenne des %d nombres est %.4f .\n", N, (float)Somme/N);
}

