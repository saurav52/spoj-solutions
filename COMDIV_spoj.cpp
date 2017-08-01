#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        scanf("%d%d",&a,&b);
        if(a==0 || b==0)
        {
            printf("1\n");
            continue;
        }
        if(a>b)
        {
            int c=a;
            a=b;
            b=c;
        }
        int p=__gcd(a,b);
        int count=1;
        for(int i=2;i<=p;i++)
        {
            if(a%i==0 && b%i==0)
            {
                ++count;
            }
        }
        printf("%d\n",count);
    }
}
