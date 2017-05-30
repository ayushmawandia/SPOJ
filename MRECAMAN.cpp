#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{

int a[500001];
unordered_map<int,bool> check;

for(int i=1;i<=500000;i++)
{
	a[i]=a[i-1]-i;
	if(a[i]<=0 || check.find(a[i])!=check.end())
	{
		a[i]=a[i-1]+i;
		check.insert(make_pair(a[i],true));
	}
	else
	check.insert(make_pair(a[i],true));
}
int t;
cin>>t;
while(t!=-1)
{
	cout<<a[t]<<endl;
	cin>>t;
}
}
