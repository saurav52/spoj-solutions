#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k;
    int a[1000];
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>k;
        long long i=1,sum=1,q=0;
        while(sum<=k)
        {
            i=i*2;
            sum=sum+i;
            ++q;
        }
        sum=sum-i;
        memset(a,0,sizeof a);
        int b=k-sum;
        int p=0;
        while(b>0)
        {
            a[p++]=b%2;
            b=b/2;
        }
        for(int j=q-1;j>=0;j--)
        {
            if(a[j]==0)
                cout<<"5";
            else
                cout<<"6";
        }
        cout<<endl;
    }
}
