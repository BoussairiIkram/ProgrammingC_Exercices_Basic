#include<stdio.h>
/*
Écrivez un programme pour afficher tous les nombres naturels en sens inverse de n à 1 
en utilisant la boucle while. 
*/

main()
{
    int i, n;

    printf("Saisir un nombre n : ");
    scanf("%d", &n);
 
    printf("les nombres naturels de %d a 1 : \n", n);
 
    i=n ;
    
while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }
}

