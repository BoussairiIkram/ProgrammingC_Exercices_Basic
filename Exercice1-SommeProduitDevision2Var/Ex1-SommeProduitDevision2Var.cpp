#include<stdio.h>
/*
Exercice1 :
�crire un programme qui demande � l'utilisateur de saisir deux valeurs enti�res x, y. Affichez sur des lignes successives : 
1)	le produit de ces deux variables. 
2)	la division enti�re de ces deux variables.
3)	Le reste de la division. 
4)	la division r�elle de ces deux variables.
 */

main()
{
int x,y;

   printf("donnez deux nombres:");
   scanf("%d %d",&x,&y);
//1 :
   printf("le produit      : %d*%d=%d.\n",x,y,x*y);  
//2 :
   printf("Devision Entier : %d/%d=%d.\n",x,y,x/y);  
//3 :
   printf("Le Modulo       : %dMod%d=%d.\n",x,y,x%y);  
//4 :
   printf("Devision Reel   : %d/%d=%f.\n",x,y,(float)x/y); 
 }


