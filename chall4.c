#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,somm,max;
    somm=0;
    max=0;
    n=1;
    printf("Entrez une serie d'entier:\n");
    while(n!=0)
    {
       do{
            scanf("%d",&n);
            if(n>100)
            printf("Entrez  un entier inferieur ou egal a 100\n");
       }while(n>100);
       somm+=n;
       if(n>max) max=n;
    }
    printf("la somme: %d\n",somm);
    printf("le max: %d\n",max);
    return 0;
}
