#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;

int main()
{
    int n,d;
    std::cin>>n>>d;
    while(n!=0)
    {
        mp::cpp_int u = 1;
        for(unsigned i = 1; i <=d; ++i)
            u *= n;
        std::cout << u<< '\n';
        std::cin>>n>>d;
    }
}
