#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n>>m;
        if(n>m)
        {
            if(m%2==0)
                cout<<"U"<<endl;
            else
                cout<<"D"<<endl;
        }
        else
        {
            if(n%2==0)
                cout<<"L"<<endl;
            else
                cout<<"R"<<endl;
        }
    }
}

