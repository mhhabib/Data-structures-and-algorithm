#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,hr,mr,h1,m1;
    char ch;
    cin>>h>>ch>>m;
    cin>>h1>>ch>>m1;
    if(h==h1)
        printf("%02d:%02d\n",h,(m+m1)/2);
    else
        printf("%02d:%02d\n",(h+h1)/2,(((m+(h1-h)*60)%60)+m1)/2);

    return 0;
}
