#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    int t,s1,s2,a,b,p;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>s1>>s2;
        if((s1>0 && s2>0) || (s1<0 && s2<0))
        {
            if(s1<0 && s2<0)
            {
                s1=abs(s1);
                s2=abs(s2);
            }
            p=gcd(s1,s2);
            cout<<abs((s1/p)-(s2/p))<<endl;
        }
        else
        {
            if(s1>0)
            {
                s2=abs(s2);
                p=gcd(s1,s2);
                 cout<<abs((s1/p)+(s2/p))<<endl;
            }
            else
            {
                s1=abs(s1);
                p=gcd(s1,s2);
                 cout<<abs((s1/p)+(s2/p))<<endl;
            }
        }
    }
}
