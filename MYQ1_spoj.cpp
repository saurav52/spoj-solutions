#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        if(n==1)
        {
            cout<< "poor conductor"<<endl;
            continue;
        }
        int f=n%10;
        if(f==0 || f==1 || f==5 || f==6)
            cout<<(n/5)<<" ";
        else
            cout<<(n/5)+1<<" ";
        if(f==2 || f==1)
            cout<<"W L"<<endl;
        else if(f==3 || f==0)
            cout<<"A L"<<endl;
        else if(f==4 || f==9)
            cout<<"A R"<<endl;
        else if(f==5 || f==8)
            cout<<"M R"<<endl;
        else
            cout<<"W R"<<endl;
    }
}
