#include<bits/stdc++.h>
using namespace std;
int c[7001][7001];
int main()
{
    char a[7100];
    char b[7101];
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
         cin>>a;
         int len=strlen(a);
         for(int i=0;i<len;i++)
            b[len-1-i]=a[i];
         for(int i=0;i<=len;i++)
            c[0][i]=0;
         for(int j=0;j<=len;j++)
            c[j][0]=0;

        int x,y,max1;
         for( x=0;x<len;x++)
         {
            for( y=0;y<len;y++)
            {
                if(b[x]==a[y])
                {
                    c[x+1][y+1]=c[x][y]+1;
                }
                else
                    c[x+1][y+1]=max(c[x][y+1],c[x+1][y]);
                 max1=c[x+1][y+1];
            }
        }
        cout<<(len-max1)<<endl;
    }

}
