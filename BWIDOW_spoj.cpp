#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int a[1001];
    int b[1001];
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        int max=0,j=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
            if(max<a[i])
            {
                max=a[i];
                j=i;
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]>max && i!=j)
            {
                cout<<"-1"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<(j+1)<<endl;
    }
}
