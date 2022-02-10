//////possible subsequence of the array
 #include<iostream>
 #include<vector>
 using namespace std;

 void sub(int ind, vector<int> &ds, int arr[], int n)
 {
     int i=0;
     if(ind==n)
     {
         for(i;i<ds;i++)
     {
         cout<<i<<" ";
     }
     cout<<endl;
     }
     ds.push_back(arr[ind]);
     sub(ind+1,ds,arr,n);
     ds.pop_back();

     sub(ind+1,ds,arr,n);
 }

 int main()
 {
    int arr[]={3,1,2};
    int n = 3;
    vector<int> ds;
    sub(0,ds,arr,n);
    return 0;
 }




