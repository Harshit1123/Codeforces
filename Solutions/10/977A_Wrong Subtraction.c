#include<stdio.h>
int main(){
int n,s;
scanf("%d%d",&n,&s);
 
while(s>0){
  if(n%10==0)
   n=n/10;
  else
   n--;
   
   s--;
};
printf("%d",n);
return 0;
}
