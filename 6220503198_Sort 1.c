#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n][1000],temp[1000];

    for(i=0;i<n+1;i++)
    {

        gets(a[i]);
    }
    for(i=0;i<n+1;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0);
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }

        }
    }
    printf("Out put \n");
    for(i=0;i<n+1;i++)
    {
        printf("%s\n",a[i]);
    }

}
