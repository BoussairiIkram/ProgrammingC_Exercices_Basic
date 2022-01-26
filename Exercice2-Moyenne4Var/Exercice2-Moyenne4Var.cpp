#include<stdio.h>
/* 
Écrire un programme qui demande à l'utilisateur de saisir quatre nombres entier 
puis affichera la moyenne avec une précision de 3 chiffres après la virgule.
*/

main()
	{
	int a,b,c,d;
	
	printf("Donnez le premier nombre:");
	scanf("%d",&a);
	
	printf("Donnez le deuxieme nombre:");
	scanf("%d",&b);
	
	printf("Donnez le troisieme nombre:");
	scanf("%d",&c);
	
	printf("Donnez le quatrieme nombre:");
	scanf("%d",&d);
	
	/*
	Methode2:
	printf("Donnez les quatre nombres:");
	scanf("%d %d %d %d",&a ,&b,&c,&d);
	*/
	
	printf("La moyenne =%.3f",(float)(a+b+c+d)/4);
}

