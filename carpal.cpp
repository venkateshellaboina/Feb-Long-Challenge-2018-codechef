#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll t;
  cin>>t;
  while(t--)
 {
     ll n;
     cin>>n;
     int a[n];
     vector <ll> v;
     long long res,mx=INT_MIN;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]>mx) mx=a[i];
     }
     ll noc,dist,spd;
     cin>>noc>>dist>>spd;

     res=(noc-1)*mx;
     cout<<res<<endl;
     /*ll time=dist/spd;
     ll t[n],init=0;
     t[0]=a[0];
     for(int i=1;i<n;i++)
     {
         t[i]=t[i-1]+time+a[i];

     }
     ll start,fin;
     start=t[n-1];
     v.push_back(t[n-1]);
     ll m=0;
     for(int i=1;i<noc;i++)
     {
     t[0]=t[0]+a[0];
     ll k=0;
     for(int j=1;j<n;j++)
     {
      ll temp=t[j-1]+time;

      if(temp<t[j])
      {
          ll xx=t[j]-temp;
          t[j]=temp+xx+a[j];
      }
      else
      {
          k++;
          t[j]=temp+a[j];
      }



     }
      m=i;
     v.push_back(t[n-1]);
     if(k==n-1)
     {

         break;
     }


     }

     ll siz=v.size();
     //for(int i=0;i<siz;i++) {cout<<v[i]<<" ";}cout<<endl;
     if(m==noc-1)
     {
         cout<<t[n-1]-start<<endl;
     }
     else
     {

     ll dif,tot;
     tot=v[siz-2]-v[0];
     dif=v[siz-1]-v[siz-2];
     ll fact=noc/(siz-1);
     ll rem=noc%(siz-1),fin;
     if (rem!=0)
     fin=fact*tot+(fact)*dif+v[rem-1]-v[0];
     else
     fin=fact*tot+(fact-1)*dif;
     cout<<fin<<endl;
     }*/

 }
return 0;
}
