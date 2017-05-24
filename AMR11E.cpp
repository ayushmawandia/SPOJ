#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
 
bool isPrime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;	
	}	
	return true;
} 
 
int main()
{
	int a[2665];
	bool check=true;
	memset(a,0,sizeof(a));
	int c=0;
	int i=2,j=2,k=2;
	for( i=2;;i++)
	{
		if(isPrime(i)==false)
					continue;
		for( j=2;;j++)
		{
			
			if(isPrime(j)==false || i==j)
					continue;
			for(k=2;;k++)
			{
				
				if(isPrime(k)==false || i==k || j==k)
					continue;
				//	cout<<c<<" "<<i<<" "<<j<<" "<<k<<" "<<" "<<i*k*j<<endl;
					for(int u=1;i*k*j*u<=2664;u++)
					{
						
					if(	a[i*k*j*u]==0)
					{
					
			         	a[i*k*j*u]=1;
			        	c++;
		     	}
					
				}
				if(i*j*k>2664)
					break;
			}
			if(i*j>2664)
					break;
		}
		if(i>2664)
					break;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		int i=0;
		while(count<n)
		{
			if(a[i]==1)
			{
				count++;
			}
			if(count==n)
				cout<<i<<endl;
			i++;
		}
	}
	
}
