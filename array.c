#include<stdio.h>
int main(){
int arr[]={6,3,2,7,8};
int n=5;
int temp=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)

{
   if(arr[i]<arr[j])
{
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
}
}
}

for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
