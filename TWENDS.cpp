#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int t=1;
	while(n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int ar[n][n];
		memset(ar,0,sizeof(ar));
		if(n%2!=0)
		{
			for(int i=0;i<n;i++)
			{	
				ar[i][i]=a[i];
			}
			int x=n-2;
			for(int i=x;i>=1;i-=2)
			{
				int m=0,p=n-i;
				for(int j=1;j<=i;j++)
				{
					long long a1=a[m];
					if(a[m+1]>=a[p])
						a1=a1+ar[m+2][p]-a[m+1];
					else
						a1=a1+ar[m+1][p-1]-a[p];
					long long int a2=a[p];
					if(a[m]>=a[p-1])
						a2=a2+ar[m+1][p-1]-a[m];
					else
						a2=a2+ar[m][p-2]-a[p-1];
					ar[m][p]=max(a1,a2);
					m++;
					p++;
				}
			}
				
		}
		else
		{
			for(int i=0;i<n-1;i++)
			{	
				ar[i][i+1]=abs(a[i]-a[i+1]);
			
			}
		
			int x=n-3;
			for(int i=x;i>=1;i-=2)
			{
				int m=0,p=n-i;
				for(int j=1;j<=i;j++)
				{
					long long a1=a[m];
					if(a[m+1]>=a[p])
						a1=a1+ar[m+2][p]-a[m+1];
					else
						a1=a1+ar[m+1][p-1]-a[p];
					long long int a2=a[p];
					if(a[m]>=a[p-1])
						a2=a2+ar[m+1][p-1]-a[m];
					else
						a2=a2+ar[m][p-2]-a[p-1];
					ar[m][p]=max(a1,a2);
					m++;
					p++;
			
				}
				
			}
			
		}
		
		
		cout<<"In game "<<t<<", the greedy strategy might lose by as many as "<<ar[0][n-1]<<" points."<<endl;
		cin>>n;
		t++;
	}
}
