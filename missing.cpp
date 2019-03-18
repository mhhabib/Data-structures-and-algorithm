#include<bits/stdc++.h>
using namespace std;
int getmissing(int arr[],int n)
{
    int total=n*(n+1)/2;
    for(int i=0;i<n;i++)
        total-=arr[i];
    return total;
}
int main()
{
   int arr[10]={1,2,3,4,5,7,8};
   int miss=getmissing(arr,8);
   cout<<miss<<endl;
}
