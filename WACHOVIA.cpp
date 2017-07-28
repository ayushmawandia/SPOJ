#include<iostream>
#include<cstring>
using namespace std;

int w[50],v[50];
int dp[1001][50];
int wt,n;

int find(int we,int i)
{
    if(we<=0 || i>=n)
        return 0;
    if(dp[we][i]!=-1)
    {
        return dp[we][i];
    }
    int va=0,wei=we;
    if(we>=w[i])
    {
        va=v[i];
        wei-=w[i];
    }
    return dp[we][i]=max(va+find(wei,i+1),find(we,i+1));
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        memset(w,0,sizeof(w));
        memset(v,0,sizeof(v));
        cin>>wt>>n;
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>v[i];
        }
        cout<<"Hey stupid robber, you can get "<<find(wt,0)<<"."<<endl;
    }
}
