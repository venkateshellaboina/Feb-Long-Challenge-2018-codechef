#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll t;cin>>t;
  while(t--)
    {
        string str;
        cin>>str;
        ll len=str.length();
        ll a[26]={0};
        vector <vector <ll> > v;
        v.resize(26);
        for(ll i=0;i<len;i++)
        {

            a[str[i]-'a']++;
            v[str[i]-'a'].push_back(i);
        }
        ll k=0,flag=0,oind=-1;
        for(ll i=0;i<26;i++)
        {
            if(a[i]%2==1) {oind=i;k++;}
            if(k>1)
            {

                cout<<"-1"<<endl;
                flag=1;
                break;
            }

        }
        if(flag==1) continue;

        ll b[len];
        ll l=0,r=len-1;
        for(ll i=0;i<26;i++)
        {
            if(i!=oind)
            {
                ll siz=v[i].size();
                for(ll j=0;j<siz;j++)
                {
                    b[l++]=v[i][j];
                    b[r--]=v[i][++j];

                }




            }






        }
        if(oind!=-1)
        {


        ll siz=v[oind].size();
        for(int i=0;i<siz;i++)
        {
            b[l++]=v[oind][i];

        }
        }

        for(ll i=0;i<len;i++)
        {

            cout<<b[i]+1<<" ";
        }

        cout<<endl;

    }




}
