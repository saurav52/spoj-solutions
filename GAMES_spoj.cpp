#include<bits/stdc++.h>
using namespace std;
// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    char c[100];
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>c;
        int i=0,len=strlen(c),q=0;
        while(c[i]!='.' && i<len)
        {
            q=q*10+(int)(c[i]-'0');
            i++;
        }
        if(i==len)
        {
            cout<<"1"<<endl;
            continue;
        }
        ++i;
        int j=0;
        int sum=1;
        while(i<len)
        {
            q=q*10+(int)(c[i]-'0');
            i++;
            sum=sum*10;
        }

        cout<<(sum/gcd(q,sum))<<endl;
    }
}
