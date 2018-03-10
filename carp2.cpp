#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
 {
     ll n;cin>>n;
     ll a[n];
     ll tsum=0;
     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
         tsum+=a[i];
     }
    ll c,d;
    double s;
     cin>>c>>d>>s;
      double dist;
      cout<<"tsum "<<tsum<<endl;
     dist=tsum*s+(n-1)*d;
     cout<<"dist1 "<<dist<<endl;
     double t1=dist/s;
     cout<<"t1 "<<t1<<endl;
     dist+=(c-1)*(a[0]*s);
     cout<<"dist2 "<<dist<<endl;
     double t2=dist/s;
     cout<<"t2 "<<t2<<endl;
     cout<<t2-t1<<endl;


 }
return 0;
}

