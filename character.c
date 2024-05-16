#include<stdio.h>
#include<string.h>
int main(){
    char a[10]="a6b2c1";
    int n=strlen(a);
    int range=0;
    printf("%d\n",n);
    for(int i=0;i<n;i+=2)
    {
         range=  (a[i+1])-48;
        for(int j=0;j<range;j++)
        {
            printf("%c",a[i]);
        }
    }
}