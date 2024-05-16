#include<stdio.h>
int main(){
    int n=3;
    int temp=n;
    for(int i=n;i>0;i--)
    {
        for(int j=n;j>0;j--)
        {
            for(int k=i;k>0;k--)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}
