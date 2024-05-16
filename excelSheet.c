#include<stdio.h>
#include<string.h> 
#include<math.h>
int main(){
char* charac="ZY";
int val=0;
int size=strlen(charac);
for(int i=0;i<size;i++)
{   val+=pow(26,size-1-i)*(charac[i]-64);
}
printf("%d",val);

}
