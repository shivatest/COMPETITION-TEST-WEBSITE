#include<stdio.h>
main()
{
unsigned long long int m,n,avg,a,b,k,i=0,sum=0;
scanf("%llu",&m);
scanf("%llu",&n);
unsigned long long int arr[n];
while(n--)
{
    a=0;
    b=0;
    k=0;
    scanf("%llu",&a);
    scanf("%llu",&b);
    scanf("%llu",&k);
    arr[i]=((b-a+1)*k);
    sum+=arr[i];
    ++i;


}
avg=sum/m;
printf("%llu \n",avg);

}
