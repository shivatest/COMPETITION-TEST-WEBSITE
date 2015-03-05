#include <stdio.h>
#include<math.h>
int isFibonacci(unsigned long long int);

int main()
{       unsigned long long int t,n,i;
        scanf("%llu",&t);
while(t--)
{
        scanf("%llu",&n);
        if(isFibonacci(n)==1)
        { printf("IsFibo \n");}
        else
        if(isFibonacci(n)==0)
        {printf("IsNotFibo \n");}

}
return 0;
}

int isFibonacci(unsigned long long int n)
{   unsigned long long int k1=((5*n*n)+4);
    unsigned long long int k2=((5*n*n)-4);
    unsigned long long int r1=sqrt(k1);
    unsigned long long int r2=sqrt(k2);
    if((r1*r1)==k1||(r2*r2)==k2)
    {return 1;}
    else
    {return 0;}
}
