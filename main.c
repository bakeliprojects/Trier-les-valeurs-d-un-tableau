#include <stdio.h>
#include <stdlib.h>

 main(){
 int N=5;
 int i,j,L, inversion;
 int tab[N], sauv;


 for (i=0;i<N;i++){
    printf(" saisir une valeur : ");
    scanf("%d", &tab[i]);
 }

     printf(" ********Affichage avant Tri******* \n ");

 for (i=0;i<N;i++){
    printf("%d , ", tab[i]);
 }

printf("  \n ");

L= N;

     do
       {
       inversion=0;

       for(i=0;i<L-1;i++)
          {
          if (tab[i]>tab[i+1])
             {
             sauv=tab[i+1];
             tab[i+1]=tab[i];
             tab[i]=sauv;
             inversion=1;
             }
          }
       L--;
       } while(inversion);

      printf(" ********Affichage apres Tri******* \n ");

 for (i=0;i<N;i++){
    printf("%d , ", tab[i]);
 }

     }
