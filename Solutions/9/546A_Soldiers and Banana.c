#include<stdio.h>
int main(){
int k,n,w; 
int p=0,a=0;
scanf("%d%d%d",&k,&n,&w);
for (int i = 1; i <= w; i++) {
    p=i*k;
    a+=p;
}
if(a>n)
printf("%d",a-n);
else
printf("0");
 
return 0;
}
