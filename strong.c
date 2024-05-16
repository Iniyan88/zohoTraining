#include<stdio.h>
int fact(int n)
{  int facto=1;
    for(int i=1;i<=n;i++)
    {
        facto*=i;
    }
    return facto;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
         sum =sum + fact(n%10);
        n/=10;
    }
  printf(sum==temp?"yes":"no");
}