#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<char,int> m;
    m['c']=0;
    m['h']=0;
    m['e']=0;
    m['f']=0;
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.length();
        long long int cnt=0;
        if(len<4)
        {

            cout<<"normal"<<endl;

        }
        else

        {
         for(int i=0;i<4;i++)
          {
              m[str[i]]++;
          }
          if(m['c']>0 && m['h']>0 && m['e']>0 && m['f']>0)
          {
              cnt++;
          }
          for(int i=4;i<len;i++)
          {
              if(m[str[i-4]]>0) m[str[i-4]]--;
              m[str[i]]++;
              if(m['c']>0 && m['h']>0 && m['e']>0 && m['f']>0)
              {
              cnt++;
              }

          }
          if(cnt>0)
          {

              cout<<"lovely "<<cnt<<endl;
          }
          else
          {

              cout<<"normal"<<endl;
          }

        }
        m['c']=0;
        m['h']=0;
        m['e']=0;
        m['f']=0;






    }






}
