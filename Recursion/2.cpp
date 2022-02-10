// PRINT NAME 5 times using recursion

// #include<iostream>
// using namespace std;
// int cnt=5;
// string s = "anupam";

// void print_name()
// {
//     if(cnt==0) return;
//     cout<<s<<endl;
//     cnt--;
//     print_name();
// }

// int main()
// {
//     print_name();
//     return 0;
// }



//////PRINT 1 to N using recursion

#include<iostream>
using namespace std;
int cnt=1;
int n;


void print_num()
{
    if(cnt==n+1) return;
    cout<<cnt<<endl;
    cnt++;
    print_num();
}

int main()
{
    
    cin>>n;
    print_num();
    return 0;
}