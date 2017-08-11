#include<bits/stdc++.h>
using namespace std;
int c[1001][1001];
int main()
{
    string a;
    string b;
    std::string line;
    while (getline(cin, a))
    {
        getline(cin, b);
        std::sort(a.begin(), a.end());
          std::sort(b.begin(), b.end());
         for(int i=0;i<=a.size();i++)
            c[0][i]=0;
         for(int j=0;j<=b.size();j++)
            c[j][0]=0;

        int x,y;
         for( x=0;x<b.size();x++)
         {
            for( y=0;y<a.size();y++)
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
         for(int m=(k-1);m>=0;m--)
                    cout<<d[m];
         cout<<endl;
    }

}
