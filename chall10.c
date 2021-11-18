#include <unistd.h>
#include <stdio.h>



int main(){

    int n;
    int p = 1;
    int somme = 0;

    while (p <= 10){
        printf("donner nombre %d\n",p);
        scanf("%d", &n);
        if (n > 0)
            somme += n;
        p++;
    }

    printf("somme : %d\n", somme);

    return 0;
}
