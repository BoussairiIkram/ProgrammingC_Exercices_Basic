#include<stdio.h>
/*
Écrire un programme pour lire n nombre de valeurs dans un tableau(Maximum 50)
puis les inverser dans le même Tableau (Max des elements 50).
*/

main(){
   int Tab[50];
   int i,n,Case_Temp;
   
  do{   
   printf("Donnez le Nombre totale d'elements :");
   scanf("%d",&n);}
  while(n<2 || n>50);             
   
	for(i=0;i<n;i++){
	   printf("Donnez le %d %s Element :",i+1,(i+1==1)?"ere":"eme");
       scanf("%d",&Tab[i]);}
      
	
	for(i=0;i<n/2;i++){
		Case_Temp=Tab[i];
		Tab[i]=Tab[n-1-i];            
		Tab[n-1-i]=Case_Temp; }
	

	for(i=0;i<n;i++){
	   printf("%d ",Tab[i]);}

}

