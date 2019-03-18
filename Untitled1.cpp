#include<bits/stdc++.h>
using namespace std;

void swap(char& a, char& b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}
void permutation(string s,int i,int n)
{
    int j;
    if(i==n) cout<<s<<"\t";
    else{
        for(j=i;j<s.length();j++){
            swap(s[i],s[j]);
            permutation(s,i+1,n);
            swap(s[i],s[j]);
        }
    }
}
int main()
{
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    cout<<"After permute your string is: "<<endl;
    permutation(str,0,str.length()-1);
    cout<<endl;
    return 0;
}
