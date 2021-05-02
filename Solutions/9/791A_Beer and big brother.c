#include<stdio.h>

int main(){
int a,b,d=0;
scanf("%d%d",&a,&b);
while(a<=b){
    a=a*3;
    b=b*2;
    d++;
}
printf("%d",d);
return 0;
}
