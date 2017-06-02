#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
	int m,n;
	cin>>m>>n;
	int a[m-1],b[n-1];
	for(int i=0;i<m-1;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>b[i];
	}
	sort(a,a+m-1,grt);
	sort(b,b+n-1,grt);
	long long int ans=0;
	int i=0,j=0;
	while(i!=m-1 || j!=n-1)
	{
		if(i==m-1)
		{
			ans+=b[j]*(m);
			j++;
		}
		else if(j==n-1)
		{
			ans+=a[i]*n;
			i++;
		}
		else if(a[i]>=b[j])
		{
			ans+=a[i]*(j+1);
			i++;
		}
		else
		{
			ans+=b[j]*(i+1);
			j++;
		}
	//	cout<<i<<" "<<j<<" "<<ans<<endl;
	}
	
	cout<<ans<<endl;
	

}
}
