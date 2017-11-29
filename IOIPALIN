#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c[n];
    int a[n][n];
    memset(a,0,sizeof(a));
    cin>>c[0];
    a[0][0]=0;
    for(int i=1;i<n;i++)
    {
        cin>>c[i];
        a[i][i]=0;
        a[i-1][i]=1;
        if(c[i-1]==c[i])
            a[i-1][i]=0;
    }
    for(int i=n-2;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            a[j][n-i+j]=min(1+a[j][n-i+j-1],min(1+a[j+1][n-i+j],2+a[j+1][n-i+j-1]));
            if(c[j]==c[n+j-i])
            {
                a[j][n-i+j]=min(a[j][n-i+j],a[j+1][n-i+j-1]);
            }
        }
    }
   /** for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } **/
    cout<<a[0][n-1]<<endl;
}
