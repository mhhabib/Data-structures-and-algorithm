#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int val;
    for(int i=0;i<5;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    cout<<"Main vector: ";
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<" ";
    cout<<endl<<"Sorted vector: ";
    sort(v.begin(),v.end());
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<" ";
    v.pop_back();
    cout<<endl<<"Pop vector: ";
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<" ";
    v.insert(v.begin()+3,999);
    cout<<endl<<"insert vector: ";
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<" ";
    v.erase(v.begin()+3);
    cout<<endl<<"erase vector: ";
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<" ";
    cout<<endl;
    cout<<"sum of all element: "<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<"Min element of vector: "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Max element of vector: "<<*max_element(v.begin(),v.end())<<endl;
}
