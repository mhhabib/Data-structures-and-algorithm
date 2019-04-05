#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<20;i++)
        v.push_back(rand()%10);
    cout<<"Initial vector: ";
    for(int  i=0;i<v.size();i++)
        cout<<v[i]<<" ";
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
    cout<<endl<<"Sum of the vector: "<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<"Max val of the vector: "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Min val of the vector: "<<*min_element(v.begin(),v.end())<<endl;
    sort(v.begin(),v.end());
    cout<<"After sort of vector: ";
    for(int k=0;k<v.size();k++)
        cout<<v[k]<<" ";
    cout<<endl<<"After unique of the vector: ";
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int k=0;k<v.size();k++)
        cout<<v[k]<<" ";
    v.clear();
    cout<<endl<<"Is Vector cleared?: "<<v.empty()<<endl;

}
