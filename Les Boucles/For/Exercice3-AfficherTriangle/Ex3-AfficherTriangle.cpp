#include<stdio.h>
/*
Ecrire un programme qui permet d'afficher un triangle d'entiers, selon un entier saisi par l'utilisateur.
Exemple :
pour n=4
1
2 2
3 3 3
4 4 4 4
*/

int main() {
	
	int n,i,j;
	
	printf("veillez saisi un nombre entier : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);}
			
		printf("\n");
	}
	return 0;
}


