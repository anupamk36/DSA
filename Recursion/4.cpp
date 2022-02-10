// ///////REVERSE ARRAY WITH RECURSION
// #include<iostream>
// using namespace std;
// void reverse(int n, int i, int arr[])
// {
//     if(i>=n/2) return; // BASE CASE

//         swap(arr[i],arr[n-i-1]);
//         reverse(n,i+1,arr);
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     reverse(n,0,arr);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }


//////CHECK IF STRING IS PALINDROME USING RECURSION

#include<iostream>
using namespace std;

bool isPalindrome(int i, string &s)
{
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return isPalindrome(i+1,s);

}

int main()
{
    string s = "aaaabaaaab";
    isPalindrome(0,s)?cout<<"String is a palindrome"<<"\n" : cout<<"String is not a palindrome"<<"\n";
    return 0;
}