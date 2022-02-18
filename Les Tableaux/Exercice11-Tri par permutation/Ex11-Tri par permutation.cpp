#include<stdio.h>
/*
Ecrire un programme pour trie un tableau (MAX 20 elements) en utilisant le tri par permutation. 
*/

int main() {
	
    int T[20],A[20];
    int i,j,n,cmp = 0;
    
    do{
     printf("Donner la taille du tableau : ");
     scanf("%d",&n);	
	}while(n<2 || n>20);
    
    printf("Donner les valeurs du tableau : \n");
    
    for(i=0;i<n;i++){
    	printf("T[%d] = ",i+1);
    	scanf("%d",&T[i]);}
    	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		   if(T[i]>T[j])
		    cmp++;
		}
		
		A[cmp] = T[i];
		cmp = 0;
	}
	for(i=0;i<n;i++)
	 T[i] = A[i];
	
	printf("le tableau apres le trie par permutation : \n");
	
	for(i=0;i<n;i++){
		printf("T[%d] = %d\n",i+1,T[i]);
	}
	
	return 0;      
}

