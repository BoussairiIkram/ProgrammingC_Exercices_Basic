#include<stdio.h>
#include<math.h>
/*
Ecrire un programme  qui lit un entier et d�termine s'il est un carr� parfait ou non.
On rappelle qu'un entier est carr� parfait, si sa racine carr�e est enti�re.
Ex: les nombre 1 (1x1), 4 (2x2) et 9 (3x3) sont tous des carr�s parfaits.
*/


 main()
	{
	    float n;
	    
	    printf("Entrez un Entier: ");
	    scanf("%f",&n);
	    
	    if( sqrt(n) == (int)sqrt(n) )
		 printf("%.0f est un carre parfait.\n",n);
        else
		 printf("%.0f n'est pas un carre parfait.\n",n);
  
}

