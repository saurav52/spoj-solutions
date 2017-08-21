#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>n;
        std::priority_queue<long long int, std::vector<long long int>, std::greater<long long int> > a;
        std::priority_queue<long long int, std::vector<long long int>, std::greater<long long int> > b;

        for(int i=0;i<n;i++)
        {
            cin>>p>>q;
            a.push(p);
            b.push(q);
        }
        long long count=0,max=0;
        while(!a.empty() && !b.empty())
        {
            if(a.top()<b.top()){

                ++count;
                a.pop();
            }
            else{

                --count;
                b.pop();
            }
            if(max<count)
                max=count;
        }
        cout<<max<<endl;
    }
}
