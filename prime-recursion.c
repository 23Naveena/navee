#include<stdio.h>

int prime(int,int);

int main()
{
     int n,test;
     printf("Enter a number : ");
     scanf("%d",&n);
     test = prime(n,n/2);
     if(test == 1)
     {
         printf("%d is a prime number\n",n);
     }
     else
     {
         printf("%d is not a prime number",n);
     }
     return 0;
}
int prime(int n,int i)
{
     if(i == 1)
     {
         return 1;
     }
     else
     {
         if(n % i == 0)
         {
            return 0;
         }
         else
         {
            return prime(n,i-1);
         }
     }
}
