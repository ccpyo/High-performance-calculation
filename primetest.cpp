#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

  int n=0,count=0;
  double total_time=0;
  clock_t start_time,end_time;

  scanf("%d",&n);
  int prime[n-1];

  start_time = clock();

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
        {
        count++;
        //printf("%d ",prime[i]);
        }
  }

  end_time = clock();

  total_time=(double)(end_time-start_time)/CLOCKS_PER_SEC;

  printf("%d\n",count);
  printf("%f\n",total_time);
}


