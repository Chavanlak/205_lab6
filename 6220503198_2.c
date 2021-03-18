#include<stdio.h>
int main()
{
    int a=0,b=0,i,j;
    scanf("%d",&j);
    char x[j],y[j];
    scanf("%s",x);
    scanf("%s",y);
    for ( i = 0; i < j; i++)
    {
       if (y[i]==x[i])
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    printf("%d %d",a,b);
}


