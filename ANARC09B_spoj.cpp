#include<bits/stdc++.h>
using namespace std;

int gcd(long long int a,long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    long long int h,w;
    cin>>h>>w;
    while(h!=0 && w!=0)
    {
        long long int p=gcd(h,w);
        cout<<((h/p)*(w/p))<<endl;
        cin>>h>>w;
    }
}
