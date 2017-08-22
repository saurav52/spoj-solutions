#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000];
    int n;
    cin>>n;
    while(n!=0)
    {
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if((a[i]-a[i-1])>200){
                cout<<"IMPOSSIBLE"<<endl;
                flag=1;
                break;
            }
        }
        if(a[n-1]!=1422 && flag==0)
        {
            if(((1422-a[n-1])*2)>200){
                cout<<"IMPOSSIBLE"<<endl;
                flag=1;
            }
        }
        if(flag==0)
            cout<<"POSSIBLE"<<endl;
        cin>>n;
    }
}
