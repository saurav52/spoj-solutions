/*
///////        /\          |          |  ||||||||             /\     \              /
/             /  \         |          |  |       |           /  \     \            /
/            /    \        |          |  |        |         /    \     \          /
//////      /      \       |          |  |        |        /      \     \        /
      /    /||||||||\      |          |  |       |        /||||||||\     \      /
      /   /          \     |          |  |||| ||         /          \     \    /
      /  /            \    |          |  |     ||       /            \     \  /
/////// /              \   ||||||||||||  |       ||    /              \     \/
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p,q,i;
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>p;
        q=0,i=0;
        while(q<p)
        {
            q=((i*i)+i+2)/2;
            ++i;
        }
        cout<<--i<<endl;
    }
}
