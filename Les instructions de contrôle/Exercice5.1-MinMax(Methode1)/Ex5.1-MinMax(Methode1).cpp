#include<stdio.h>
/*
Ecrire un programme qui lit deux entiers et indique le plus petit et le plus grand des deux. 
*/

//Methode1: if-else avec deux variables d'aide " min " et " max "

 main(){
 	
 	int a,b,min,max;
 	
 	printf("Donnez deux entiers:");
 	scanf("%d %d",&a,&b);

 	if(a<b){
 		min=a;
 		max=b;}
    else {
    	min=b;
    	max=a;
	}
 
	 printf("Min=%d \t Max=%d",min,max);
 }


