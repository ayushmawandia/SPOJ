#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;
vector<int> x;
int a[1000001];

int main()
{
	memset(a,1,sizeof(a));
	int i,j;           
		for(i=2;i<=sqrt(100001);i++)
		{
					            
			if (a[i])          
			{
				x.push_back(i);    
				for(j=i;j*i<1000001;j++) a[i*j] = 0;  
			}
	
		}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int result = n;          
		for(int i=2;i*i <= n;i++) {            
			if (n % i == 0) result -= result / i;            
			while (n % i == 0) n /= i;          
		}          
		if (n > 1) result -= result / n;         
		cout<<result<<endl;
	}
}
