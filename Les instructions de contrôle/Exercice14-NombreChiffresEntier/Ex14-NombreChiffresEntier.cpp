#include<stdio.h>
#include<Math.h>
/*
Écrivez un programme pour entrer un nombre de l'utilisateur et comptez
le nombre de chiffres dans l'entier donné .
*/

int main()
{
    int Nb,Nombre_chiffres= 0;

    printf("Saisir un  nombre entier: ");
    scanf("%d",&Nb);

    if(Nb==0)  Nombre_chiffres=1;
    else       Nombre_chiffres=log10(Nb)+1;

    printf("Nombre de chiffres : %d",Nombre_chiffres);
}


