#include<bits/stdc++.h>
using namespace std;

bool mark[1000001];
int a[1000001];
void simpleSieve(int limit)
{
    memset(mark, true, sizeof(mark));
    int multi;
    for (int p=2; p*p*p<limit; p++)
    {
        multi=p*p*p;
        if (mark[multi] == true)
        {
            for (int i=multi; i<limit; i+=multi)
                mark[i] = false;
        }
    }
    int count=0;
    for (int p=1; p<limit; p++)
    {
        if (mark[p] == true)
        {
            ++count;
            a[p]=count;
        }
    }
}
int main()
{
    int t,n;
    simpleSieve(1000001);
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        if(mark[n]==true)
            cout<<"Case "<<z<<": "<<a[n]<<endl;
        else
            cout<<"Case "<<z<<": "<<"Not Cube Free"<<endl;
    }
}
