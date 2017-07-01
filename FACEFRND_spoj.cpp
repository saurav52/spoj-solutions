#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001];
    int b[10001];
    int c[101];
    int n,m,p,q,count=0,k=0;
    memset(a,0,sizeof a);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        a[p]=1;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>b[k];
            ++k;
        }
    }
    for(int i=0;i<k;i++){
       if(a[b[i]]!=1)
       {
            ++count;

            a[b[i]]=1;
        }
    }

    cout<<count<<endl;
}
