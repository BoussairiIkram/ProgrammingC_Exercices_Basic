#include<stdio.h>
/*
�crire un programme qui demande � l'utilisateur de saisir un nombres et affiche ensuite la parit� 
et s'il est multiple de 5.
*/

main(){
	    int Nb;
	    
	    printf("Donnez un entier:");
	    scanf("%d",&Nb);
	    
	    if(Nb%2==0)
	    { if(Nb%5==0)
		  printf("%d est pair et Multiple de 5.\n",Nb);
		  else 
		  printf("%d est pair et n'est pas Multiple de 5.",Nb);
		  }
		  
	    else
	    {if(Nb%5==0)
		   printf("%d est impair et Multiple de 5.\n",Nb);
		  else
	       printf("%d est impair et n'est pas Multiple de 5.\n",Nb);
	    }
}





