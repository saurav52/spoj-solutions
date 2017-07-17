#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        vector <pair<int,int> > v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(b,a));
        }
        sort(v.begin(),v.end());

        int k=0,count=1;
        for(int i=1;i<n;i++)
        {
            if(v[i].second > v[k].first)
            {
                k=i;
                ++count;
            }
        }
        cout<<count<<endl;
         vector <pair<int,int> > ().swap(v);
    }
}
