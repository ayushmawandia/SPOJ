#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	while(s!="*")
	{
		bool check=true;
		char c=s[0];
		int l=s.length();
		for(int i=1;i<l-1;i++)
		{
			if(s[i]==' ')
			if(s[i+1]!=c && s[i+1]!=c-32 && s[i+1]!=c+32)
				{
					check=false;
					break;
				}
			//	cout<<s[i]<<" "<<c+32<<" "<<c-32<<" "<<s[i+1]<<" "<<endl;
		}
		if(check)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
		getline(cin,s);
	}
}
