#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    long long a[20010];
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int p=0,min1=INT_MAX;
        for(int j=(k-1);j<n;j++)
        {
            if(min1>(a[j]-a[p]))
                min1=(a[j]-a[p]);
            ++p;
        }
        cout<<min1<<endl;
    }
}
