#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    //scanf("%d",&n);
    char a[6][1000],temp[1000];

    for(i=0;i<6;i++)
    {

        printf("Enter : ");
        scanf("%s",a[i]);
    }
    for(i=0;i<6;i++)
    {

        for(j=i+1;j<6;j++)
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
    for(i=0;i<5;i++)
    {
        printf("%s\n",a[i]);
    }

}
