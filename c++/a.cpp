#include<iostream>
using namespace std;
int main()
    {
    long long int cost,tr,x,cnt,m,left,t;
    while(t--)
        {
    cin>>cost;
    cout<<endl;
    cin>>tr;
    cout<<endl;
    cin>>m;

    x=cost/tr;
    cnt=x;
    while(x>=m)
        {

        cnt+=x/m;
        left=x%m;
        x=(x/m)+(left);
    }
    cout<<cnt<<endl;
}
}
