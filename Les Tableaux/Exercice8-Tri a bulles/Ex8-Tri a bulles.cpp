#include<stdio.h>
/*
Ecrire un programme pour trie un tableau (MAX 20 elements) en utilisant le tri a bulles . 
*/

int main() {
	
    int T[20];
    int i,j,n,tmp,ech;
    
    do{
     printf("Donner la taille du tableau : ");
     scanf("%d",&n);	
	}while(n<2 || n>20);
   
    
    printf("Donner les valeurs du tableau : \n");
    
    for(i=0;i<n;i++){
    	printf("T[%d] = ",i+1);
    	scanf("%d",&T[i]);
	}
    	
	do{
		ech=0;
		for(i=0;i<n-1;i++){
			if(T[i]>T[i+1]){
				tmp = T[i];
				T[i] = T[i+1];
				T[i+1] = tmp;
				ech++;
			}
		}
	}while(ech != 0);
	
	printf("le tableau apres le trie a Bulles : \n");
	
	for(i=0;i<n;i++){
		printf("T[%d] = %d\n",i+1,T[i]); }
	
	return 0;      
}

