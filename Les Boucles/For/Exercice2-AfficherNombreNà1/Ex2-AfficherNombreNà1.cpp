#include<stdio.h>
/*
Écrivez un programme pour afficher tous les nombres naturels en sens inverse de n à 1 
en utilisant la boucle for. 
*/

main()
{
    int i, n;
  
    printf("Saisir n :");
    scanf("%d", &n);
 
    for(i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }
}

