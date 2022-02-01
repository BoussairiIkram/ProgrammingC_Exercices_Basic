#include<stdio.h>
/*
Ecrire un programme qui permet d'afficher les nombres pairs ou impairs suivant le choix 
de l'utilisateur dans un intervalle donné. 
*/

main()
{
 int a,b,i,Pair,Impair; 
 int Choix=1;      

 do{
   printf("Donnez Les borne de votre intervalle:");
   scanf("%d %d",&a,&b);  }
 while(a<0 || b<0 || a>=b);

do{
   printf("Voulez vous Extraire les nombres Pair ou Impair:(1->Paire,2->Impaire) :");
   scanf("%d",&Choix);}
while(Choix<1 || Choix>2);

   i=a;
   
 do{
     if(Choix==1){
	    if(i%2==0)  printf("%d  ",i);}
	    
     else{
	    if(i%2!=0)  printf("%d  ",i);}
	    
	   i++;
    }
    while(i<=b);
}

