#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	long long int a[n],ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ans+=a[i]*(n-(2*(n-i)-1));
	}
	cout<<ans<<endl;
}
}
