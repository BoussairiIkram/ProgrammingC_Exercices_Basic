#include<stdio.h>
#include<Math.h>
/*
On considère cinq points A, B, C, D, E. Chaque point est identifié par ses cordonnées : l'abscisse x et l'ordonnée y. 
Ecrire un programme qui détermine et affiche le point le plus proche du centre O(x =0, y=0).
La distance d'un point au centre est donnée par la formule suivante :
d := sqrt(x2+y2), sqrt étant la fonction racine carré
*/

 main(){
 	
  float x,y,Distance;
  char point='A';
  
  
  printf("Donnez l'abscisse x et l'ordonnée y du points A A(x,y) :");
  scanf("%f %f",&x,&y);
  
   Distance=sqrt(x*x+y*y);
   	 	   
   printf("Donnez l'abscisse x et l'ordonnée y du points B B(x,y) :");
   scanf("%f %f",&x,&y);
   
   if(Distance>sqrt(x*x+y*y)) 
    { Distance=sqrt(x*x+y*y);
	  point='B';}
    
   printf("Donnez l'abscisse x et l'ordonnée y du points C C(x,y) :");
   scanf("%f %f",&x,&y);
   
   if(Distance>sqrt(x*x+y*y)) 
    { Distance=sqrt(x*x+y*y); point='C';}
    
    printf("Donnez l'abscisse x et l'ordonnée y du points D D(x,y) :");
    scanf("%f %f",&x,&y);
   
   if(Distance>sqrt(x*x+y*y)) 
    { Distance=sqrt(x*x+y*y);point='D';}
   
   printf("Donnez l'abscisse x et l'ordonnée y du points E E(x,y) :");
   scanf("%f %f",&x,&y);
   
   if(Distance>sqrt(x*x+y*y)) 
    { Distance=sqrt(x*x+y*y);point='E'; }
    
    
    printf("Le point le plus proche du centre est %c  .",point);
}

