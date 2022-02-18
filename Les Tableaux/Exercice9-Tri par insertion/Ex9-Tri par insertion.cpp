#include<stdio.h>
/*
Ecrire un programme pour trie un tableau (MAX 20 elements) en utilisant le tri par insertion . 
*/

int main() {
	
    int T[20];
    int i,j,n,var;
    
    do{
     printf("Donner la taille du tableau : ");
     scanf("%d",&n);	
	}while(n<2 || n>20);
    
    printf("Donner les valeurs de ce tableau : \n");
    
    for(i=0;i<n;i++){
    	printf("T[%d] = ",i+1);
    	scanf("%d",&T[i]);}
    	
	for(i=0;i<n;i++){
	   var = T[i];
	   j = i-1;
	   
	   while(j>=0 && T[j]>var){
	   	T[j+1] = T[j];
	   	j--; }
	   	
	   T[j+1] = var;
	}
	
	printf("le tableau apres le trie par Insertion : \n");
	
	for(i=0;i<n;i++){
		printf("T[%d] = %d\n",i+1,T[i]); }
	
	return 0;      
}

