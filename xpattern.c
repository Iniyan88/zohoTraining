#include<stdio.h>
#include<string.h>
int main(){
    char patter[100]="program";
    int n=strlen(patter);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%c ",patter[i]);
            }
            else if(i+j+1==n)
            {
                printf("%c ",patter[i]);
            }
            else{
                printf(" ");
            }
        }
            printf("\n");
    }    
}