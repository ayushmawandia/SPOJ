#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    while(a!="*")
    {
        int c=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==b[i])
                continue;
            c++;
            while(a[i]!=b[i])
            {
                i++;
            }
        }
        cout<<c<<endl;
        cin>>a>>b;
    }
}
