#include<stdio.h>
int main(){
    int n;
    int rem=0;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    while(n>0)
    {
        rem=n%10;
        sum+=rem;   
        n/=10;
    }
    int cSum=sum;
    rem=0;
    while(sum>0)
    {   rem=(rem*10)+(sum%10);
        sum/=10;    }  
    printf(temp==cSum*rem?"yes":"no");

}