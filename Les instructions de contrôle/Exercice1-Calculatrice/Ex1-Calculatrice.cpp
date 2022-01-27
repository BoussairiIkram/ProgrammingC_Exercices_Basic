#include<stdio.h>
/*
Ecrire un programme se comportant comme une calculatrice, c'est-à-dire il fait la lecture d'une ligne 
supposée contenant un entier ,un opérateur et un entier (ex : 1 + 3) . il fait les calcule selon 
l'operateur saisie par l'utilisateur . les opérateur possible : + - * / et %.
*/

int main() {
 int A,B;
 char Operateur;
 
 printf("Donnez les deux nombres à calculer ansi que l'operateur (ex : 1 + 3) :");
 scanf("%d%c%d",&A,&Operateur,&B);
 
 switch(Operateur) 
 {
 	case '+' :printf("%d+%d=%d",A,B,A+B); break;
 	case '-' :printf("%d-%d=%d",A,B,A-B); break;
 	case '*' :printf("%d*%d=%d",A,B,A*B); break;
 	case '/' :
	 if(B!=0) printf("%d/%d=%d",A,B,(float)A/B); 
	 else printf("Impossible!!"); 
	 break;
 	case '%' : printf("%d%%d=%d",A,B,A%B); break;
 	default:  printf("%c n'est pas un operateur arithmetique.",Operateur);
 	
 }
}

