#include<stdio.h>
/*
Ecrire un programme qui lit n élément (Maximum 15), puis Inverse le minimum 
(de la première position) avec le maximum (de la dernière position).
*/

main(){
   int Tab[15];
   int i,n,Case_Temp;
   int min,max,indice_min=0,indice_max=0;
   
  do{   
   printf("Donnez le Nombre totale d'element :");
   scanf("%d",&n);}
  while(n<2 || n>15);             
   
	for(i=0;i<n;i++){
	   printf("Donnez l'element %d:",i+1);
       scanf("%d",&Tab[i]);}
    
    printf("le Tableau avant la permutation de min et max: \n");
     for(i=0;i<n;i++){
     	printf("%d  ",Tab[i]);}
	 
    min=Tab[0];max=Tab[0];
    
	 for(i=1;i<n;i++){
	 	if(Tab[i]<min)      
	 	  {	min=Tab[i];
		     indice_min=i;}
		     
		if(Tab[i]>=max)
	      {max=Tab[i]; 
		   indice_max=i; }
	  }
   
      Case_Temp=Tab[indice_min];
      Tab[indice_min]=Tab[indice_max];
      Tab[indice_max]=Case_Temp;
	
    printf("\nle Tableau apres la permutation de min et max: \n");
     for(i=0;i<n;i++){
     	printf("%d  ",Tab[i]);}
}




