#include<stdio.h>
/*
Ecrire un programme qui lit deux entiers et indique le plus petit et le plus grand des deux. 
*/

//Methode 2: if-else sans variables d'aide

 main(){
 	
 	int a,b;
 	
 	printf("Donnez deux entiers:");
 	scanf("%d %d",&a,&b);

 	if(a<b){
 		printf("Min=%d \t Max=%d",a,b);}
    else if(b<a){
    	printf("Min=%d \t Max=%d",b,a);
	}
	else{
		printf("Min=Max=%d");
	}
 }

