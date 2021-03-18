#include<stdio.h>
#include<string.h>
{
    int n,i,j;
 char x[250];
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
  if(x[i]=='U')
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
