#include<stdio.h>
/*
Ecrire un programme qui lit deux entiers et indique le plus petit et le plus grand des deux. 
*/

//Methode 4: Opérateur conditionnel sans variables d'aide

 main(){
 	int a,b;
 	
 	printf("Donnez deux entiers:");
 	scanf("%d %d",&a,&b);
 
	printf("Min=%d \t Max=%d", a<=b?a:b, a>=b?a:b);
 }

