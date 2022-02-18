#include<stdio.h>
/*
Ecrire un programme pour trie un tableau (MAX 20 elements) en utilisant le tri par sélection . 
*/

int main() {
	
    int T[20];
    int i,n,max,posmax,m;
    
    do{
     printf("Donner la taille du tableau : ");
     scanf("%d",&n);	
	}while(n<2 || n>20);
    
    m = n;
    
    printf("Donner les valeurs du tableau : \n");
    
    for(i=0;i<n;i++){
    	printf("T[%d] = ",i+1);
    	scanf("%d",&T[i]);}
    	
	while(n>0){
		
	 max = T[0];
	 posmax = 0;
	 
	   for(i=0;i<n;i++){
	   	if(T[i]>max){
	   		max = T[i];
	   		posmax = i;
		   }
		}   
		 
		for(i=posmax;i<n;i++){
			T[i] = T[i+1];
		}
		
		T[n-1] = max;
		n--;	
	}
	
	printf("le tableau apres le trie par selection : \n");
	
	for(i=0;i<m;i++){
		printf("T[%d] = %d\n",i+1,T[i]);
	}
	
	return 0;      
}


