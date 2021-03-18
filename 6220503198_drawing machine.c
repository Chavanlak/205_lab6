#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j;
 char y[250];
 scanf("%d",&n);
 scanf("%s",y);
 int a[n][n];
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
      a[i][j]='.';
  }
 }
  int b=0,c=0;
 for(i=0;i<strlen(y);i++)
 {
  if(y[i]=='U')
  {
   if(a[b][c]=='.'||a[b][c]=='|')
   a[b][c]='|';
   else if(a[b][c]!='-'||a[b][c]!='+')
   a[b][c]='+';
   if(b-1>=0)
   b--;
   if(a[b][c]=='.'||a[b][c]=='|')
   a[b][c]='|';
   else if(a[b][c]!='-'||a[b][c]!='+')
   a[b][c]='+';
  }
  else if(y[i]=='D')
  {
   if(a[b][c]=='.'||a[b][c]=='|')
   a[b][c]='|';
   else if(a[b][c]!='-'||a[b][c]!='+')
   a[b][c]='+';
   if(b+1<n)
   b++;
   if(a[b][c]=='.'||a[b][c]=='|')
   a[b][c]='|';
   else if(a[b][c]!='-'||a[b][c]!='+')
   a[b][c]='+';
  }
  else if(y[i]=='R')
 {
   if(a[b][c]=='.'||a[b][c]=='-')
   a[b][c]='-';
   else if(a[b][c]!='|'||a[b][c]!='+')
   a[b][c]='+';
   if(c+1<n)
   c++;
   if(a[b][c]=='.'||a[b][c]=='-')
   a[b][c]='-';
   else if(a[b][c]!='|'||a[b][c]!='+')
   a[b][c]='+';
  }
else if(y[i]=='L')
  {
   if(a[b][c]=='.'||a[b][c]=='-')
   a[b][c]='-';
   else if(a[b][c]!='|'||a[b][c]!='+')
   a[b][c]='+';
   if(c-1>=0)
   c--;
   if(a[b][c]=='.'||a[b][c]=='-')
   a[b][c]='-';
   else if(a[b][c]!='|'||a[b][c]!='+')
   a[b][c]='+';
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%c",a[i][j]);
  }
  printf("\n");
 }
 return 0;
}
