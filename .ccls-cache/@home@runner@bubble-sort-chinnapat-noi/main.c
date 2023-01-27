#include <stdio.h>
#include <math.h>
#include "sorting.h"
#include <stdlib.h>
int Isprime(int);
int main(int argc,char *argv[]) 
{ int n = argc-1;
  int i, j=0;
  int *a = (int*)malloc(sizeof(int)*n);
  int *prime = (int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++) {
    a[i] = atoi(argv[i+1]);
  } 
  if(Isprime(a[i])) {
       prime[j] = a[i]; 
       j++;
  }
  n=j;
  printf("%d",n);
  if(n == 0) printf("No prime\n");
  else { display(prime,n);
  bubbleSort(prime,n);
   }
  return 0;
}
int Isprime(int num)
{
  if(num==1) return 0;
  for(int i =2; i < num; i++)
    {
      if(num % i == 0) return 0;
    }
  return 1;
}
/*void main(int argc, char **argv)
{
int i,*a,N;

N=argc-1;
a=(int*)malloc(sizeof(int)*N);
for(i=0;i<N;i++) 
{

a[i]=atoi(argv[i+1]);
printf(“a[%d]=%d”,i, a[i]);

}

} */