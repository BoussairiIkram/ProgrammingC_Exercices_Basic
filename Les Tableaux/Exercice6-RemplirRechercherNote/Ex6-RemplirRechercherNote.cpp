#include<stdio.h>
/*
Ecrire un programme qui lit les points de 15 élèves d'une classe dans un devoir et les mémorise dans un tableau POINTS . 
1-Remplir le Tableau .
2- Rechercher la moyenne des notes. 
3- A partir des POINTS des élèves, établir un tableau NOTES de dimension 5 qui est composé de la façon suivante : 
NOTES[4] contient le nombre de notes supérieur ou égal à 16 .
NOTES[3] contient le nombre de notes supérieur ou égal à 14 et inférieur strictement à 16 .
NOTES[2] contient le nombre de notes supérieur ou égal à 12 et inférieur strictement à 14 .
NOTES[1] contient le nombre de notes supérieur ou égal à 10 et inférieur strictement à 12 .
NOTES[0] contient le nombre de notes inférieur strictement à 10.
*/

main(){
	
  float Points[15];
  float Somme=0;
  int Notes[5]={0};
  int i;
  
    for(i=0;i<15;i++){
	  do{printf("Donnez la note %d : ",i+1);
         scanf("%f",&Points[i]);}
	  while(Points[i]<0 || Points[i]>20);
	  
	  Somme+=Points[i];
	}

	printf("La Moyenne des notes est : %f .\n",Somme/15);
	
	for(i=0;i<15;i++){
	  if(Points[i]>=16)      {Notes[4]++;}
	  else if(Points[i]>=14) {Notes[3]++;}
	  else if(Points[i]>=12) {Notes[2]++;}
	  else if(Points[i]>=10) {Notes[1]++;}
	  else                   {Notes[0]++;}
	}	
    
   	for(i=0;i<5;i++){
   		printf("%d ",Notes[i]);} 
}
  


