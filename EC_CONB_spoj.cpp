#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,t;
    int a[100000];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>p;
        if(p%2!=0)
        {
            cout<<p<<endl;
            continue;
        }
        int n=p,j=0;
        while(n!=0)
        {
            a[j++]=n%2;
            n=n/2;
        }
        int sum=0;
        --j;
        for(int k=j;k>=0;k--)
        {
            if(a[k]==1)
                sum=sum+pow(2,(j-k));
        }
        cout<<sum<<endl;
    }
}
