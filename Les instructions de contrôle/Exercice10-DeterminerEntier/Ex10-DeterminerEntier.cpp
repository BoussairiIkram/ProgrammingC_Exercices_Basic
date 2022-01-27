#include<stdio.h>
/*
Ecrire un programme qui lit un nombre et détermine s'il est entier ou non.
*/

main()
	{
	    float x;
	    
	    printf("Donnez un nombre:");
	    scanf("%f",&x);
	    
	    if(x==(int)x) 
	    	printf("%d est un entier.\n",(int)x);
	    else 
		    printf("%f n'est pas un entier.\n",x);      
}

