#include<stdio.h>
/*
�crivez un programme pour  v�rifiez si un nombre est Fort ou non.
Un nombre fort est un nombre sp�cial dont la somme de la factorielle
de ses chiffres est �gale au nombre d'origine.

Par exemple: 145 est un nombre fort. Puisque, (1! + 4! + 5! = 145 )
*/

int main()
{
    int Nb,Dernier_chiffre,Copie,Somme=0;
    int fact,i;

    printf("Saisir un nombre : ");
    scanf("%d", &Nb);

     Copie = Nb;

while(Nb > 0){
	
    Dernier_chiffre = Nb % 10;
    fact = 1;

	
	for(i=2; i<=Dernier_chiffre; i++){
	  fact*= i; } //fact = fact * i 
	  

    Somme+=fact; //Somme = Somme + fact

    Nb = Nb / 10;
    }

    if(Somme==Copie)
    {   printf("%d est un nombre fort",Copie);}
    
    else
    {  printf("%d n'est pas un nombre fort.",Copie); }  
}

