#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char a[10]="a10b11c12";
    int n=strlen(a);
    char s[100];
    int flag=0;
    int value=0;
    char temp;
    for(int i=0;i<n;i++)
    {        
        if(a[i] <'a' || a[i]>'z')
        {
            s[flag++]=a[i];  
        }
        if(a[i]>='a' && a[i]<='z')
        {  
            value=atoi(s);
            strcpy(s," ");
            flag=0;
             for(int k=0;k<value;k++)
             {                
                printf("%c",temp);
             }
             temp=a[i];
        }           
    }
    value=atoi(s);
    for(int i=0;i<value;i++)
    {
        printf("%c",temp);
    }
   

}
