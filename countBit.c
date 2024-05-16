#include<stdio.h> 

int countBit(int a){
int count=0;  
 while(a>0)
{
     if(a%2==1)
     count++;
      a/=2;
}
return count;
}


int main(){
int n=5;
int a[n];
for(int i=0;i<=n;i++)
{
   a[i]=countBit(i);
}
for(int i=0;i<=n;i++)
{
printf("%d",a[i]);
}

}
