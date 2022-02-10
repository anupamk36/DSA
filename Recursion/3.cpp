//////FIBONACCI WITH RECUSRION
// #include<iostream>
// using namespace std;

// int fib(int x)
// {
//     if(x==0 || x==1 ) return x;
//     return (fib(x-1)+fib(x-2));
// }

// int main()
// {
//     int x, i=0;
//     cout<<"Enter the number of terms in series: ";
//     cin>>x;
//     cout<<"\nFibonacci Series: ";
//     while(i<x){
//     cout<<" "<<fib(i)<<" ";
//     i++;
//     }
//     return 0;
// }

///////FACTORIAL OF n NUMBERS WITH RECURSION

// #include<iostream>
// using namespace std;
// int fact(int x)
// {
//     if(x==0) return 1;
//     return x*fact(x-1);
// }

// int main()
// {
//     int x, i=0;
//     cout<<"Enter the number: "<<"\n";
//     cin>>x;
//     while(i<=x)
//     {
//         cout<<fact(i)<<" ";
//         i++;
//     }
//     return 0;
// }


/////FIBONACCI WITH RECURSION

#include<iostream>
using namespace std;

int fib(int x)
{
    if(x==0 || x==1) return x;
    return(fib(x-1)+fib(x-2));
}

int main()
{
    int i=0;
    int x;
    cout<<"Enter the number of series you want: ";
    cin>>x;
    while(i<x)
    {
    cout<<fib(i)<<" ";
    i++;
    }
    return 0;
}