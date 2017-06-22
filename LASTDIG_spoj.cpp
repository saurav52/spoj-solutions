#include<bits/stdc++.h>
using namespace std;
int main()
{int t,a,l;
  long long b;
  char c[1001];
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>c>>b;
        a=(int)(c[strlen(c)-1]-'0');
        if(a==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(b==0)
        {
            cout<<"1"<<endl;
            continue;
        }
        int p=a%10;
        if(p==0 || p==1 || p==5 || p==6)
            cout<<p<<endl;
        else
        {
            b%=4;
            if(b==0)
                b=4;
            b=pow(a,b);
            b=b%10;
           cout<<b<<endl;
        }
    }
}
