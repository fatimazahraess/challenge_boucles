#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,p,s;
    printf("Donnez un entier:\n");
    scanf("%d",&n);
    printf("Les nombres premiers inferieurs a %d sont:\n",n);
    for(p=2;p<=n;p++)
    {
        s=1;
        for(i=2;i<p;i++)
        {
            if(p%i==0)
                {s=0;
            break; }
        }
        if(s==1)
            printf("%d\n",p);
    }
    return 0;
}
