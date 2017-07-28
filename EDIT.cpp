#include<iostream>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int l=s.length();
        int a[l],b[l];
        if(s[0]>='A'&& s[0]<='Z')
        {
            a[0]=0;
            b[0]=1;
        }
        else
        {
            a[0]=1;
            b[0]=0;
        }
        for(int i=1;i<l;i++)
        {
            if(i%2==0)
            {
                if(s[i]>='A'&& s[i]<='Z')
                {
                    a[i]=a[i-1];
                    b[i]=b[i-1]+1;
                }
                else
                {
                    a[i]=a[i-1]+1;
                    b[i]=b[i-1];
                }
            }
            else
            {
                if(s[i]>='A'&& s[i]<='Z')
                {
                    a[i]=a[i-1]+1;
                    b[i]=b[i-1];
                }
                else
                {
                    a[i]=a[i-1];
                    b[i]=b[i-1]+1;
                }
            }
        }
        cout<<min(a[l-1],b[l-1])<<endl;
    }

}
