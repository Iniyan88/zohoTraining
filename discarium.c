#include<stdio.h>
int myPower(int n,int limit)
{ int test=1;
   for(int i=0;i<limit;i++)
   {
       test*=n;
   }
   return test;
}
int length(int a)
{  int count=0;
    while(a>0)
    {
       count++;
       a/=10;
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int size=length(n);
    int sum=0,i=1;
    while(n>0)
    {   sum= sum+ myPower(n%10,size);
        n/=10;
        size--;
    }
    printf(sum==temp?"yes":"no");

}