////Nth FIBONACCI NUMBER
#include<iostream>
using namespace std;
int f(int n)
{
    if(n<=1) return n;
    return (f(n-1)+f(n-2));
}
int main()
{
    int n=10;
    cout<<f(n)<<" ";
    return 0;
}


// time complexity 2^n;