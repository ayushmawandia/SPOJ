#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k;
		cin>>k;
		
		int x=log(1+(k*1.0)/2.0)/log(2);
		if(2*(pow(2,x)-1)!=k)
			x++;
		if(k==1)
			x=1;
		//cout<<x<<endl;
		long long end=2*(pow(2,x)-1);
		long long start=2*(pow(2,x-1)-1)+1;
		long long int mid=(end+start)/2;
		for(int i=1;i<=x;i++)
		{
		
			mid=(end+start)/2;
		//		cout<<start<<" "<<mid<<" "<<end<<endl;
			if(k<=mid)
			{
			
				cout<<"5";
				end=mid;
			}
			else
			{
				cout<<"6";
				start=mid+1;
			}
			
		}
		
		cout<<endl;
	}
}
