#include<stdio.h>
/*
Ecrire un programme de r�solution de l'�quation ax + b = 0, pour des valeurs quelconques lues de a et b. 
La solution peut �tre un nombre r�el," impossible ", ou " ind�termin�e " .
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

