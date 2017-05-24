#include<iostream>

using namespace std;

int maxm(char c[52][52],int v[52][52],int val[52][52],int x,int y)
{
	cout<<x<<" "<<y<<" "<<val[x][y]<<endl;
	int max1=0;
	for(int i=-1;i<=1;i++)
	{
		for(int j=-1;j<=1;j++)
		{
			int a=0,b=0;
			if(i==0 && j==0)
				continue;
			if(v[x+i][y+j]==-1 && c[x+i][y+j]=='A')
				{
					val[x+i][y+j]=1;
					v[x+i][y+j]=1;
					a=maxm(c,v,val,x+i,y+j);
				}
				else if(c[x+i][y+j]==(c[x][y]+1))
				{
					val[x+i][y+j]=val[x][y]+1;
					b=maxm(c,v,val,x+i,y+j);
				}
				max1=max(max1,max(a,b));
				
		}
	}
	
	return max1;
}




int main()
{
	int a,b;
	cin>>a>>b;
	while(a)
	{
		char c[52][52];
		int v[52][52],val[52][52];
		for(int i=0;i<a+2;i++)
		{
			for(int j=0;j<b+2;j++)
			{
				if(i==0||j==0||i==a+1||j==b+1)
				{
					c[i][j]='/';
				}
				else
				{
					cin>>c[i][j];
				}
				v[i][j]=-1;
				val[i][j]=0;
			}
		}
		int max1=0;
		for(int i=1;i<a+1;i++)
		{
			for(int j=0;j<b+1;j++)
			{
				
				if(c[i][j]=='A' && v[i][j]==-1)
				{
					val[i][j]=1;
					v[i][j]=1;
					max1=max(max1,maxm(c,v,val,i,j));
				}
			}
		}
	//	cout<<max1<<endl;
		for(int i=1;i<a+1;i++)
		{
			for(int j=0;j<b+1;j++)
			{
				if(val[i][j]>max1)
					max1=val[i][j];
				}
			}
		cout<<max1<<endl;
		cin>>a>>b;
		
	}
}
