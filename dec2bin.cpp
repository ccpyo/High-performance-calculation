#include <stdio.h>
#include <stdlib.h>

int main (void){
int x=0, z=0;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,count=0;
  for(z=0; z<=65536;z++)
  {
        x=z;
        p=z%2;
        z=z/2;
        o=z%2;
        z=z/2;
        n=z%2;
        z=z/2;
        m=z%2;
        z=z/2;
        l=z%2;
        z=z/2;
        k=z%2;
        z=z/2;
        j=z%2;
        z=z/2;
        i=z%2;
        z=z/2;
        h=z%2;
        z=z/2;
        g=z%2;
        z=z/2;
        f=z%2;
        z=z/2;
        e=z%2;
        z=z/2;
        d=z%2;
        z=z/2;
        c=z%2;
        z=z/2;
        b=z%2;
        z=z/2;
        a=z%2;
        z=x;
        if((a||b)&&(!b||!d)&&(c||d)&&(!d||!e)&&(e||!f)&&(f||g)&&(f||!g)&&(h||!i)&&(i||j)&&(i||!j)&&(!j||!k)&&(k||l)&&(j||l)&&(m||n)&&(!h||!n)&&(n||!o)&&(o||p)&&(!p||g))
        { 
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d      \n",x,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
        count++;
        } 
  }
  printf("%d",count);
  return 0;
}

