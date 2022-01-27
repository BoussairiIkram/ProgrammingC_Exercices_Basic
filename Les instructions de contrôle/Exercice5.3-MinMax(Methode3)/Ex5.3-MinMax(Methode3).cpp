#include<stdio.h>
/*
Ecrire un programme qui lit deux entiers et indique le plus petit et le plus grand des deux. 
*/

//Methode 3: Opérateur conditionnel et deux variables d'aide " min " et " max".

 main(){
 	int a,b,min,max;
 	
 	printf("Donnez deux entiers:");
 	scanf("%d %d",&a,&b);

 	a<=b?min=a:min=b;
    a>=b?max=a:max=b;
	 
	printf("Min=%d \t Max=%d .",min,max);
 }

