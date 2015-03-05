#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    unsigned long long int n,k,i=0,j=0;
    cin>>n;
    cin>>k;
    unsigned long long int arr[n],ar[n];
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<=(n-k);++i)
    {
        ar[i]=arr[i+k-1]-arr[i];
    }
     std::cout<< *std::min_element(ar,ar+(n-k+1));
}
