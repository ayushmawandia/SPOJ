#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string s;
	cin>>s;
	while(s!="00e0")
	{
		
		long long int n=(((int)s[0]-'0')*10+((int)s[1]-'0'))*pow(10,(int)s[3]-'0');
	
		long long int x=log(n)/log(2);
	//	cout<<x<<" ";
		if(pow(2,x)-1==n)
			x--;
		n=n-pow(2,x)+1;
		cout<<2*n-1<<endl;
		cin>>s;
	}
}
