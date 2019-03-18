#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
char getMax(char* ch)
{
    int maxchar[ASCII_SIZE]={0};
    int ln=strlen(ch);
    int max=0;
    char result;
    for(int i=0;i<ln;i++){
        maxchar[ch[i]]++;
        if(max< maxchar[ch[i]]){
            max= maxchar[ch[i]];
            result=ch[i];
        }
    }
    return result;
}
int main()
{
    char ch[1000];
    while(1){
        gets(ch);
        cout<<"Maximum word of this sentence is: "<<getMax(ch);
        cout<<endl;
    }

    return 0;
}
