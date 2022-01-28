#include<stdio.h>
/*
Écrivez un programme pour afficher tous les nombres naturels de 1 à n en utilisant la boucle for.
*/

main()
{
    int i, n;
 
 
    printf("Saisir un nombre n : ");
    scanf("%d", &n);
 
    printf("les nombres naturels de 1 a %d : \n", n);
 
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
 
}

