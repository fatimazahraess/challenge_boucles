#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,b,s;
    printf("enter un nombre positif n:");
    scanf("%d",&n);
    b=0;
    while (n>0)
    {
        s=n%10;
        b=10*b+s;
        n=n/10;
    }
    printf("l inverse est %d",b);
    

}