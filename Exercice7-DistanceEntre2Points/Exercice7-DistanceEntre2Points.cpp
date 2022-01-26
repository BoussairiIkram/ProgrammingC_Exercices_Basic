#include<stdio.h>
#include<math.h>
/*
Ecrire un programme qui calcule et affiche la distance entre deux points A et B du plan
dont les coordonnées (XA, YA) et (XB, YB) sont entrées au clavier comme entier.
*/

int main()
{
	int Xa,Ya,Xb,Yb;
	float Distance;
	
	printf("Entrez les cordonnées du point A(Xa,Ya) :");
	scanf("%d %d",&Xa,&Ya);
	
	printf("Entrez les cordonnes du point B(Xb,Yb) :");
	scanf("%d %d",&Xb,&Yb);
	
	Distance=sqrt(pow((Xb-Xa),2)+pow((Yb-Ya),2));
	
	printf("la distance entre A(%d,%d) et B(%d,%d) est %f .",Xa,Ya,Xb,Yb,Distance);
}

