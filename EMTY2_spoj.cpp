#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <char >s;
    char c[120006];
    int t;
    char x;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>c;
        int len=strlen(c);
        s.push(c[0]);
        s.push(c[1]);
        for(int i=2;i<len;i++)
        {
            if(s.size()>=2)
            {
                x=s.top();
                s.pop();
                if(s.top()=='1' && x=='0' && c[i]=='0')
                {
                    s.pop();
                }
                else
                {
                    s.push(x);
                    s.push(c[i]);
                }
            }
            else
                s.push(c[i]);
        }
        cout<<"Case "<<z<<": ";
        if(!s.empty())
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        while(!s.empty())
            s.pop();
    }
}
