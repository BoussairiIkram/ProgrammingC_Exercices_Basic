#include<stdio.h>
/*
Ecrire un programme de résolution de l'équation ax + b = 0, pour des valeurs quelconques lues de a et b. 
La solution peut être un nombre réel," impossible ", ou " indéterminée " .
*/

 main(){
   float a,b;
   
   printf("Donnez les coefficients a et b (ax+b=0) de votre equation :");
   scanf("%f %f",&a,&b);
   
   if(a!=0){
      if(b<0){
      printf("La solution de %.2fx%.2f=0 est %.2f .",a,b,-b/a);}
	  else{
	  	printf("La solution de %.2fx+%.2f=0 est %.2f .",a,b,-b/a);
	  }
	  
    }	  
   else {
   		if(b!=0) printf("Impossible!!");
   		else  printf("Indeterminee.");
	   } 
   	 	   
}

