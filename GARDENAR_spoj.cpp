#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double d,e,f,s,S,p;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        p=sqrt(3);
        cin>>d>>e>>f;
        s=(d+e+f)/2;
        S=(((d*d*p)/4)+((e*e*p)/4)+((f*f*p)/4)+(3*sqrt(s*(s-d)*(s-e)*(s-f))))/2;
        printf("%.2lf\n",S);
    }
}
