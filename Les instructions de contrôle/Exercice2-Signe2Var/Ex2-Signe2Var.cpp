#include<stdio.h>
/*
Ecrire un programme qui affiche si deux nombres entiers donnés sont de même signe ou non .
*/

int main(){
    int A , B ;
    
	printf("Veuillez entrer la valeur de A : ");
	scanf("%d",&A);
	
	printf("\nVeuillez entrer la valeur de B : ");
	scanf("%d",&B);
	
	if(A*B>0){
		printf("\nles deux nomnbre %d et %d se sont de meme signe ",A,B);}
	else {
		printf("\nles deux nomnbre %d et %d se sont de differents signe ",A,B);}
	
	return 0;
}

