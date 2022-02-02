#include<stdio.h>
/*
Ecrire un programme qui calcule le pgcd de deux nombres donnés par l'utilisateur.
*/
main()
{
	int A,B;
	
	printf("Donnez deux nombres:");
	scanf("%d %d",&A,&B);
	
	while(A!=0 && B!=0)
	{
		if(A>B) A=A-B;
		else    B=B-A;
	}
	
	printf("PGCD= %d",A);
}

