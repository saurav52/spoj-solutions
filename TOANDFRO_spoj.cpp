#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    while(n!=0)
    {
        cin>>s;
        int len=s.size();
        int k=1,j=0;
        for(int i=0;i<n;i++)
        {
             j=i;
            cout<<s[j];
            j=j+(2*n);
            while(j<len)
            {
                cout<<s[j-k];
                cout<<s[j];
                j=j+(2*n);
            }
            if((j-k)<len)
                cout<<s[j-k];
            k=k+2;
        }
        cout<<endl;
        cin>>n;
    }
}
