#include<stdio.h>
#include<string.h>
int find_grand_children(int pair,char input[4][2][100],char* grandparent)
{
  int count=0;
  for(int i=0;i<pair;i++)
   {
      if(strcmp(input[i][1],grandparent)==0)
      {
        char child[100];
        strcpy(child,input[i][0]);
	for(int j=0;j<pair;j++)
	{
	   if(strcmp(input[j][1],child)==0)
	   {
	      count++;
	   }
	}	
      
      }
	      
	}
   return count;  
}


int main(){
    char input[4][2][100]={
        { "luke", "shaw"},
{"wayne", "rooney"},
{"rooney", "ronaldo"},
{"shaw", "rooney"},
 };
 char g[100]="ronaldo";
 int result=find_grand_children(4,input,g);
  printf("%d",result);
}
