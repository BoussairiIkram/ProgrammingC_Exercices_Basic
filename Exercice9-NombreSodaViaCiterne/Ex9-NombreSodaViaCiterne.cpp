#include<stdio.h>
/*
Ecrire un programme C qui lit un entier V représentant un volume en litres. 
Puis calcule le nombre de canettes de 33cl que peut remplir en entier une 
citerne contenant un volume V de soda.
*/

main()
	{
	int v,n;

	printf("Entrer le volume de la citerne en litres: ");
	scanf("%d",&v);

	    n=v/0.33;

	    printf("Le nombre de canettes que peut remplir la citerne est: %d.\n",n);
}

