#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		long long int c[t],p[t];
		for(int i=0;i<t;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<t;i++)
		{
			cin>>p[i];
		}
		sort(c,c+t);
		sort(p,p+t);
		long long int ans=0;
		for(int i=0;i<t;i++)
		{
			ans+=c[i]*p[t-i-1];
		}
		cout<<ans<<endl;
		cin>>t;
		
	}
}
