#include<stdio.h>
int main(){
int n[]={-2,-5,-6,-2,-3,-1,-5,-6};
int sum=0;
int max=n[0];
for(int i=0;i<8;i++)
{
  sum= n[i]+sum > n[i] ? n[i]+sum : n[i];
  max= sum>max ? sum : max ;
}
printf("%d",max);
}
