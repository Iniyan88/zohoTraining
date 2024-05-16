#include<stdio.h>
int main(){
    int n=4;
    int  m=n/2;

    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
     {
    
 if(i==j)
{
     printf("1 ");
}
else if(i+j+1==n){
  printf("2 ");
}

else {
printf(" ");
}
}
printf("\n");


}

} 
