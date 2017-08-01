#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char c[15];
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>c;
        int flag=0;
        int len=strlen(c);
        for(int i=0;i<(len/2);i++)
        {
            if(c[i]==c[len-1-i])
                continue;
            else{
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
