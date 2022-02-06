#include<stdio.h>
/*
Ecrire un programme qui lit n entiers (Maximum 20) le programme détermine et affiche le max,
et le min de ses éléments.
*/

main(){
   int Tab[20];
   int i,n,min,max;
   
  do{  
   printf("Donnez le Nombre d'element :");
   scanf("%d",&n);}
  while(n<2 || n>20);             
   
	for(i=0;i<n;i++){
	   printf("Donnez le %d %s Element :",i+1,(i+1==1)?"ere":"eme");
       scanf("%d",&Tab[i]);}
      
    printf("Le Contenu du Tableau est : ");
	 for(i=0;i<n;i++){
	 	printf("%d ",Tab[i]);}
	
	min=Tab[0];max=Tab[0];
	
	for(i=1;i<n;i++){	
	  if(Tab[i]>max){
	  	max=Tab[i];}
	  if(Tab[i]<min){
	  	min=Tab[i];
	  }	
    }
	
	printf("\nLe min est :%d.\nLe Max est :%d. ",min,max);
}

