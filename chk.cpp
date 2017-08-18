#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    stack<int>s;
    int a[2000];
    cin>>n;
    while(n!=0)
    {
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=k)
                s.push(a[i]);
            else
                ++k;
            while(!s.empty() && s.top()==k)
            {
                s.pop();
                ++k;
            }
        }
        if(s.empty())
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        while(!s.empty())
            s.pop();
        cin>>n;
    }
}
