#include<stdio.h>
/*
Ecrire un programme  qui lit un caractère et détermine s'il fait partie des 
alphabets ou non. Et s'il l'est, dire en plus s'il est une minuscule ou une majuscule.
*/


	int main()
	{
	    char ctr;
	    
	    printf("Donnez un caractere:");
	    scanf("%c",&ctr);
	    
	    if(ctr>='a' && ctr<='z')
	       printf("%c est un alphabet en minuscule.\n",ctr);
	       
	    else if(ctr>='A' && ctr<='Z')
	       printf("%c est un alphabet en majuscule.\n",ctr);
	       
	    else
	       printf("%c n'est pas un alphabet.\n",ctr);
	    
	}

