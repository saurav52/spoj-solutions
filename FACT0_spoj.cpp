#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n!=0)
    {
        long long m=n;
        long long i=3,count=0,flag=0;
            while(n%2==0)
            {
                n=n/2;
                ++count;
            }
            if(count>0){
                printf("2^%lld ",count);
                count=0;
            }
        while(n>1 && i<=sqrt(n))
        {
            if(n%i==0)
            {
                count=0;
                while(n%i==0)
                {
                    ++count;
                    n=n/i;
                }

                 printf("%lld^%lld ",i,count);
            }
            else
            {
                    count=0;
                    i=i+2;
            }
        }
        if(n>1)
            printf("%lld^1 ",n);
        printf("\n");
        scanf("%lld",&n);
    }
}
