#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n,p,max1,sum;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        max1=1;
        sum=1;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            sum=sum+p;
            if(sum<1)
            {
                max1=max1+(1-sum);
                sum=1;
            }
        }
        cout<<"Scenario #"<<z<<": "<<max1<<endl;
    }
}
