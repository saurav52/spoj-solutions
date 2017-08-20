#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    int a[1001];
    int b[1001];
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>m>>n;
        for(int i=1;i<m;i++)
            cin>>a[i];
        for(int i=1;i<n;i++)
            cin>>b[i];
        sort(a+1,a+m);
        sort(b+1,b+n);
        int i=m-1,j=n-1,hor=1,ver=1;
        long long sum=0;
        while(i>0 && j>0)
        {
            if(a[i]>b[j])
            {
                sum=sum+(a[i]*hor);
                --i;
                ++ver;
            }
            else
            {
                sum=sum+(b[j]*ver);
                --j;
                ++hor;
            }

        }
        while(i>0)
        {
            sum=sum+(a[i]*hor);
            --i;
        }
        while(j>0)
        {
            sum=sum+(b[j]*ver);
            --j;
        }
        cout<<sum<<endl;
    }
}
