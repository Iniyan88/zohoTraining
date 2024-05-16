#include<stdio.h>
int main(){
   int n=3;
   for(int i=n;i>0;i--)
   { 
    int temp=n;
    for(int j=1;j<=n*i;j++)
    {
        printf("%d",temp);
        if(j%i==0)
        {
            temp--;
        }
    }
    printf("\n");
   }
}

