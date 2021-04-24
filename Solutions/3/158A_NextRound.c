#include <stdio.h>
 
int a[101];
int n,l,k;
 
int main()
{ 
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 
int scr=a[k-1];
for(int i=0;i<n;i++)
    if(a[i]>=scr&&a[i]!=0)l++;
    printf("%d",l);
 }  
