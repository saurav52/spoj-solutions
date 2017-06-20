#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000];
    int shoot=0,rotate=0;
    cin>>c;
    int len=strlen(c);
    for(int i=0;i<(len-1);i++)
    {
        if(c[i]=='0' && c[i+1]=='0')
            ++shoot;
        else if(c[i]=='0' && c[i+1]=='1')
            ++rotate;
    }
    if(c[len-1]=='0')
    {
        if(c[0]=='0')
            ++shoot;
        else
            ++rotate;
    }
    if(shoot==rotate || (rotate==0 && shoot>0))
        cout<<"EQUAL"<<endl;
    else if(shoot<rotate)
        cout<<"ROTATE"<<endl;
    else
        cout<<"SHOOT"<<endl;
}
