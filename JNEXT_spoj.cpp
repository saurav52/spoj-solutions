#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int b[1000010];
int main()
{
    int t,n;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int j=-1,max=a[n-1],p=1;
        b[0]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<max)
            {
                b[p]=a[i];
                j=i;
                break;
            }
            else
            {
               if(max<a[i])
                  max=a[i];
               b[p]=a[i];
               ++p;
            }
        }
        if(j==-1)
            cout<<"-1"<<endl;
        else
        {
            for(int l=0;l<j;l++)
                cout<<a[l];

            sort(b,b+p+1);
            int q=p;
            while(b[q]>a[j])
                --q;
            ++q;
            cout<<b[q];
            b[q]=INT_MAX;
            sort(b,b+p+1);
            for(int g=0;g<(p);g++)
                cout<<b[g];
            cout<<endl;

        }
    }
}
