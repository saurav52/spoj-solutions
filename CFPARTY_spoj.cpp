#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        if(n==1)
            cout<<"0"<<endl;
        else
            cout<<(n-2)<<endl;
    }
}
