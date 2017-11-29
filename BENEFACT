#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

using namespace std;

pair<int,int> bfs(vector<pair<int,int>> g[],int k,bool vis[])
{
    queue<pair<int,int>> q;
    q.push(make_pair(k,0));
    pair<int,int> m=make_pair(1,0);

    while(q.empty()==false)
    {
        pair<int,int> x=q.front();
        vis[x.first]=true;
        q.pop();
        for(int i=0;i<g[x.first].size();i++)
        {
            int a=g[x.first][i].first;
            int b=g[x.first][i].second;
            if(vis[a]==false)
            {
                q.push(make_pair(a,b+x.second));
                if(b+x.second>m.second)
                    m=make_pair(a,b+x.second);
            }
        }
    }
    return m;
}
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> g[n+1];
        for(int i=0;i<n-1;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            g[a].push_back(make_pair(b,c));
            g[b].push_back(make_pair(a,c));
        }
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        pair<int,int> x=bfs(g,1,vis);
        memset(vis,false,sizeof(vis));
        x=bfs(g,x.first,vis);
        cout<<x.second<<endl;

    }

}
