#include <unistd.h>
#include <stdio.h>



int main(){

    int n;
    int p;

    printf("donner x : \n");
    scanf("%d",&n);

    printf("donner puissance : \n");
    scanf("%d",&p);

    int s = n;

    while ( p > 1 ){
        s *= n;
        p--;
    }

    printf("%d\n", s);


    return 0;
}
