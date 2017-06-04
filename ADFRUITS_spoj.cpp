#include<bits/stdc++.h>
using namespace std;
int c[1001][1001];
int main()
{
    char a[1001];
    char b[1001];
    int len1,len2;
    while(scanf("%s",&a)!=EOF)
    {
         cin>>b;
         len1=strlen(a);
         len2=strlen(b);
         for(int i=0;i<=len1;i++)
            c[0][i]=0;
         for(int j=0;j<=len2;j++)
            c[j][0]=0;

        int x,y;
         for( x=0;x<len2;x++)
         {
            for( y=0;y<len1;y++)
            {
                if(b[x]==a[y])
                {
                    c[x+1][y+1]=c[x][y]+1;
                }
                else
                    c[x+1][y+1]=max(c[x][y+1],c[x+1][y]);
            }
        }
        char d[1000];
        int k=0;

         while(x>0)
         {
             if(c[x][y]==c[x][y-1] || c[x][y]==c[x-1][y])
             {
                 if(c[x][y]==c[x-1][y])
                    --x;
                  else if(c[x][y]==c[x][y-1])
                     --y;
             }
            else
            {
                d[k]=b[x-1];
                ++k;
                --x;
                --y;

            }
         }
         int p=k-1;
         int q=0,i=0;
         while(p>=0)
         {
             while((a[i]!=d[p]) && (i<len1))
             {

                 cout<<a[i];
                 ++i;
             }
             while((b[q]!=d[p]) && (q<len2))
             {

                 cout<<b[q];
                 ++q;
             }

             if(a[i]==d[p])
                ++i;
             if(b[q]==d[p])
                ++q;
             cout<<d[p];
             --p;
         }

         while(i<len1)
         {
             cout<<a[i];
             ++i;
         }
         while(q<len2)
         {

             cout<<b[q];
             ++q;
         }
         cout<<endl;
    }
}
