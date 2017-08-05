#include<iostream>
using namespace std;
 int main()
 {

     int a[100][100];
     for(int i=1;i<100;i++)
     {
         for(int j=1;j<=i;j++)
         {
             if(j==1)
             {

                 a[i][j]=1;
                 continue;
             }
             if(i==j)
             {
                 a[i][j]=1;
                 continue;
             }
             a[i][j]=j*a[i-1][j]+a[i-1][j-1];
         }
     }
     for(int i=1;i<20;i++)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<a[i][j]<<"\t";
         }
         cout<<endl;
     }
 }
