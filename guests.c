#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int e[n],l[n];
    int max=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e[i]);
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",e[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",l[i]);
    }
    for(int i=0;i<n;i++ ){
        sum+=e[i]-l[i];
        if(sum>max)
        {  
            max=sum;
        }
    }
    printf("%d",max);
}