#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       long long int n,m,x,k;
       cin>>n>>m>>x>>k;
       string str;
       cin>>str;
       long long int even=0,odd=0;
       for(int i=0;i<k;i++)
       {
           if(str[i]=='E')even++;
           else odd++;
       }
       for(int i=1;i<=m;i++)
       {
           if(n<=0)
           {
               break;
           }
            if(i%2==1)
            {
                int k=min(odd,x);
                n-=k;
                odd-=k;

            }
            else
            {
                int k=min(even,x);
                n-=k;
                even-=k;

            }

       }
       if(n<=0)
       {
         cout<<"yes"<<endl;

       }
       else
       {
           cout<<"no"<<endl;
       }
    }


}
