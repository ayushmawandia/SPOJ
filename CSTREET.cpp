#include<iostream>
#include<algorithm>
using namespace std;

void swap(int a[][3],int j)
{
	int temp=a[j][0];
	a[j][0]=a[j+1][0];
	a[j+1][0]=temp;
	temp=a[j][1];
	a[j][1]=a[j+1][1];
	a[j+1][1]=temp;
	 temp=a[j][2];
	a[j][2]=a[j+1][2];
	a[j+1][2]=temp;
}

int main()
{
	int t;
	
	cin>>t;
	while(t--)
	{
		int p,n,m;
		cin>>p>>n>>m;
		int set[n+1],r[n+1];
		for(int i=1;i<=n;i++)
		{
			set[i]=i;
			r[i]=0;
		}
		int a[m][3];
		for(int i=0;i<m;i++)
		{
			
			{
				cin>>a[i][0]>>a[i][1]>>a[i][2];
			}
		}
	sort(a,a+m);
		
		int c=0;
		for(int i=0;i<m;i++)
		{
		     	int j=a[i][0];
		    	while(set[ set[j]] != set[j])
  			   {
        			set[ j ] = set[ set[ j] ] ; 
 			   }
 			   j=a[i][1];
				while(set[ set[j]] != set[j])
  			   {
        			set[ j ] = set[ set[ j] ] ; 
 			   }
			if(set[a[i][0]]!=set[a[i][1]])
			{
			
			
				set[set[a[i][1]]]=set[set[a[i][0]]];
			
				c+=a[i][2];
				//cout<<r[rank]<<endl;
			//	cout<<i<<" "<<" "<<a[i][0]<<" "<<set[a[i][0]]<<" "<<" "<<a[i][1]<<" "<<set[a[i][1]]<<endl;
			}
			
		}
		cout<<p*c<<endl;
	}
}
