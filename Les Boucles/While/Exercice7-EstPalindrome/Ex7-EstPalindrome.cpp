#include<stdio.h>
/*
Écrivez un programme pour saisir le numéro de l'utilisateur et vérifiez que le numéro 
est palindrome ou non.
*/

main(){
	
    int Nb,Copie, Nb_inverse = 0;

    /* Saisir les données d'entrée */
    printf("Saisir un nombre : ");
    scanf("%d", &Nb);

    /* copier la valeur d'origine */
    Copie = Nb; 

    /* Trouver l'inverse de Nb  */
while(Nb != 0)
    {
        Nb_inverse = (Nb_inverse * 10) + (Nb % 10);
        Nb  /= 10;
    }

    /* Vérifiez si l'inverse est égal à Le nombre saisie par l'utilisateur ou non */
    if(Copie == Nb_inverse)
      { printf("%d est palindrome.", Copie);}
    else
    { printf("%d n'est pas palindrome.", Copie); }

} 

