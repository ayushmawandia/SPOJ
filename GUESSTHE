#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    cin>>s;
    while(s!="*")
    {
        int l=s.length();
        vector<int> a;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='Y')
            {
                a.push_back(i+1);
            }
        }
        int ans=1;
        for(int i=0;i<a.size();i++)
        {
            ans*=a[i];
            for(int j=i+1;j<a.size();j++)
            {
                if(a[j]%a[i]==0)
                {
                    a[j]=a[j]/a[i];
                }
            }
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]=='N' && ans%(i+1)==0)
            {
                ans=-1;
            }
        }
        if(ans==1 && s[0]!='Y')
            ans=-1;
        cout<<ans<<endl;
        cin>>s;
    }
}
