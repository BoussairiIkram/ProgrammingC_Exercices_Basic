#include<stdio.h>
/*
�crivez un programme pour afficher tous les nombres naturels de 1 � n en utilisant la boucle while.
*/
main()
{
    int i=1, n;

    printf("Saisir un nombre n : ");
    scanf("%d", &n);
 
    printf("les nombres naturels de 1 a %d : \n", n);
 
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
}

