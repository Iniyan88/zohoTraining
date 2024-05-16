/*
n=1 : 0 : 1
n=8 : 5 : 6
n=49 : 34 : 35
n=288 : 203 : 204
n=1681 : 1188 : 1189
n=9800 : 6929 : 6930
*/
#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  int val=a;
  a=a*(a+1);
  a/=2;
  int sum=0;
  for(int i=val;i>0;i--)
  {
    a-=i;
    if(sum!=a)
    {
      sum+=i;
    }
   if(sum==a)
    {
      printf("%d",i);
      break;
    }
  }
  
}