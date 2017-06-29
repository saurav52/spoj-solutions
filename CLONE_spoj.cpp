#include<bits/stdc++.h>
using namespace std;

string c[20006];
int a[20006];
int main()
{
    int n,m;
    char x[21];
    char y[21];
    cin>>n>>m;
    while(n!=0 && m!=0)
    {
        for(int i=0;i<n;i++)
            cin>>c[i];
        memset(a,0,sizeof a);
        sort(c,c+n);
        int count=0;
        for(int i=0;i<(n-1);i++)
        {
            if (c[i].compare(c[i+1]) == 0)
                ++count;
            else{
                a[count]++;
                count=0;
            }
        }
        if(count>0)
            a[count]++;
        if (c[n-2].compare(c[n-2]) != 0)
            a[0]++;
        for(int j=0;j<n;j++)
            cout<<a[j]<<endl;
        cin>>n>>m;
    }
}
