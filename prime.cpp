#include<stdio.h>
#include<stdlib.h>

int main(){

  int n=0,count=0;

  scanf("%d",&n);
  int prime[n-1];

  for(int i=0;i<n-1;i++)
  {
        prime[i]=i+2;
        //printf("%d ",prime[i]);
  }
  
  for(int j=2;j*j<n;j++)
  {
		if(prime[j-2]!=0)
		{
			for(int i=j-1;i<n-1;i++)
			{
				if(prime[i]%j==0)
				prime[i]=0;
			}
		}
  }
   for(int i=0;i<n-1;i++)
  {
   		if(prime[i]!=0)
		printf("%d ",prime[i]);
  }

}

