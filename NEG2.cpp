#include<iostream>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	string s="";
	while(n!=0 && n!=1)
	{
		if(n<0)
		{
			n*=-1;
			if(n%2==0)
			{
				s="0"+s;
				n=n/2;
			}
			else
			{
				n++;
				n=n/2;
				s="1"+s;
				
			}
		}
		else
		{
			if(n%2==0)
			{
				s="0"+s;
				n=n/-2;
			}
			else
			{
				s="1"+s;
				n=n/-2;
			}
		}
	//	cout<<n<<endl;
	}
	if(n)
		s="1"+s;
	else
		s="0"+s;
	cout<<s<<endl; 
}
