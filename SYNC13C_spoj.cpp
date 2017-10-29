#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c1,c2;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>c1>>c2;
        if(c1%2==0  || c2%2==0)
            cout<<"Suresh"<<endl;
        else
            cout<<"Ramesh"<<endl;
    }
}
