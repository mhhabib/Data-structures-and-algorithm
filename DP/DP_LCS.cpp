#include<bits/stdc++.h>
using namespace std;
#define MAXC 1000
char A[MAXC],B[MAXC];
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
string ans,anss;
int calcLCS(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0') return 0;
	if(dp[i][j]!=-1)return dp[i][j];

	if(A[i]==B[j]) return dp[i][j]=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
        return dp[i][j]=max(val1,val2);
	}
}
void printLCS(int i,int j)
{
    if(A[i]=='\0' or B[j]=='\0'){
        cout<< ans <<endl;
        return;
    }
    if(A[i]==B[j]){
        ans+=A[i];
        printLCS(i+1,j+1);
    }
    else{
        (dp[i+1][j]>dp[i][j+1])? printLCS(i+1,j): printLCS(i,j+1);
    }
}
void printALL(int i,int j)
{
    if(A[i]=='\0' or B[j]=='\0'){
        cout<< anss <<endl;
        return;
    }
    if(A[i]==B[j]){
        anss+=A[i];
        printALL(i+1,j+1);
        anss.erase(anss.end()-1);
    }
    else{
        if(dp[i+1][j]>dp[i][j+1])
             printALL(i+1,j);
        else if(dp[i+1][j]<dp[i][j+1]) printALL(i,j+1);
        else{
            printALL(i+1,j);
            printALL(i,j+1);
        }
    }
}
int main()
{
    memset(dp,-1,sizeof dp);
	cin>>A>>B;
	cout<<calcLCS(0,0)<<endl;
	printLCS(0,0);
	printALL(0,0);
	return 0;

}

