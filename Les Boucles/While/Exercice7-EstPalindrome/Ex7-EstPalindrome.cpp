#include<stdio.h>
/*
�crivez un programme pour saisir le num�ro de l'utilisateur et v�rifiez que le num�ro 
est palindrome ou non.
*/

main(){
	
    int Nb,Copie, Nb_inverse = 0;

    /* Saisir les donn�es d'entr�e */
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

    /* V�rifiez si l'inverse est �gal � Le nombre saisie par l'utilisateur ou non */
    if(Copie == Nb_inverse)
      { printf("%d est palindrome.", Copie);}
    else
    { printf("%d n'est pas palindrome.", Copie); }

} 

