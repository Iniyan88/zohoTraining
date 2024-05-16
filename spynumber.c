#include<stdio.h>
int main(){
    int n,sum=0,prod=1;
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        sum+=rem;
        prod*=rem;
        n/=10;
    }
    printf(sum==prod?"yes":"no");
}