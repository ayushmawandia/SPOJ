#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int ar[n+9];
        memset(ar,0,sizeof(ar));
        for(int i=6;i<n+6;i++)
            scanf("%lld",&ar[i]);
        long long int f[n+3],s[n+3],t[n+3];
        memset(f,0,sizeof(f));
        memset(s,0,sizeof(s));
        memset(t,0,sizeof(t));
        long long int m=0;
        for(int i=6;i<n+6;i++)
        {
            if(i%2==1)
            {
                f[i]=f[i-1];
                s[i]=s[i-1];
                t[i]=s[i-2];
                m=max(m,max(f[i],max(s[i],t[i])));
                continue;
            }
            long long a=f[i-2]>s[i-4]?f[i-2]>t[i-6]?f[i-2]:t[i-6]:s[i-4]>t[i-6]?s[i-4]:t[i-6];
            f[i]=ar[i]+a;
            s[i]=ar[i]+ar[i+1]+a;
            t[i]=ar[i]+ar[i+1]+ar[i+2]+a;
            m=max(m,max(f[i],max(s[i],t[i])));
        }


        printf("%lld\n",m);
    }
}
