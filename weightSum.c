#include<stdio.h>
#include<math.h>
int is_perfect_square(int n)
{
    int root=sqrt(n);
    return (root*root==n);
}
int weight(int n)
{  int w=0;

    if(is_perfect_square(n)){
        w+=5;
    }
    if(n%4==0 && n%6==0)
    {
        w+=4;

    }
    if(n%2==0){
        w+=3;
    }
    return w;
}
int main()
{
    int a[]={10,36,54,89,12};
    for(int i=0;i<5;i++)
    {
        printf("%d ",weight(a[i]));
    }
}