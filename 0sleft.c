#include<stdio.h>
int main(){
    int n=7;
    int arr[]={6,0,0,7,0,3,0};
    int low=0;
    int high=n-1;
    int temp=0;    
     while(low<high)
     {
        if(arr[low]==0)
        {
            low++;
        }
        if(arr[low]>0)
        {
            temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            high--;
        }
     } 
    
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}