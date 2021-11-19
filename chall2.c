#include<stdio.h>
#include<stdlib.h>
int main (){
    int i,n,j,q;
    printf("enter le nombre n :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
        printf(" ");
        for(q=0;q<(i*2)-1;q++)
        printf("*");
        printf("\n");
    }
}