#include <iostream>
using namespace std;

int main() {
	
	long long int a[11][65];
	for(int i=0;i<=9;i++)
	{
		a[i][1]=1;
	}
	a[10][1]=10;
	for(int i=2;i<=64;i++)
	{
		long long int x=a[10][i-1];
		a[10][i]=0;
		for(int j=0;j<=9;j++)
		{
			a[j][i]=x;
			a[10][i]+=x;
			x=x-a[j][i-1];
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int c,d;
		cin>>c>>d;
		cout<<c<<" "<<a[10][d]<<endl;
	}
}
