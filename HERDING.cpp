#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

bool vis[1002][1002];
char map[1002][1002];




int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=m+1;j++)
        {
        	if(i==0||j==0||i==n+1||j==m+1)
        	{
        		map[i][j]='x';
        		continue;
        	}
            cin>>map[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(vis[i][j]==false)
            {
            	
                bool flag=false;
                queue<pair<int,int>> q;
                q.push(make_pair(i,j));
                
                count++;
                while(!q.empty())
                {
                	
                	
                    pair<int,int> x=q.front();
                    int a=x.first;
                    int b=x.second;
                    
                    q.pop();
                    vis[a][b]=true;
                    if(map[a][b]=='N')
                    {
                        if(vis[a-1][b]==false)
                        {
                            q.push(make_pair(a-1,b));
                        }
                        
                    }
                    else if(map[a][b]=='S')
                    {
                        if(vis[a+1][b]==false)
                        {
                            q.push(make_pair(a+1,b));
                        }
                        
                    }
                    else if(map[a][b]=='E')
                    {
                        if(vis[a][b+1]==false)
                        {
                            q.push(make_pair(a,b+1));
                        }
                       
                    }
                    else if(map[a][b]=='W')
                    {
                        if(vis[a][b-1]==false)
                        {
                            q.push(make_pair(a,b-1));
                        }
                    
                    }
                    if(map[a-1][b]=='S')
                    {
                        if(vis[a-1][b]==false)
                        {
                            q.push(make_pair(a-1,b));
                        }
                        
                    }
                     if(map[a+1][b]=='N')
                    {
                        if(vis[a+1][b]==false)
                        {
                            q.push(make_pair(a+1,b));
                        }
                        
                    }
                    if(map[a][b+1]=='W')
                    {
                        if(vis[a][b+1]==false)
                        {
                            q.push(make_pair(a,b+1));
                        }
                       
                    }
                     if(map[a][b-1]=='E')
                    {
                        if(vis[a][b-1]==false)
                        {
                            q.push(make_pair(a,b-1));
                        }
                    
                    }
                    
                    
                   
                }
                
                
            }
        }
        
    }
    cout<<count<<endl;
}

