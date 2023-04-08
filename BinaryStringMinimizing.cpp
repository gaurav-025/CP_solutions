#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      set<ll> s1;
      vector<ll> s0;
      for(ll i=0;i<n;i++){
            if(s[i]=='0')
            s0.push_back(i);
            else
            s1.insert(i);
      }
      if(s0.size()==0){
            cout<<s<<"\n";
            return;
      }
      if(s0.size()==n){
            cout<<s<<"\n";
            return;
      }
      for(ll i=0;i<s0.size();i++){
            if(s0[i]<=k){
                  set<ll>::iterator it=s1.begin();
                  if(*it>s0[i])
                  continue;
                  ll temp=s0[i];
                  k-=(temp-*it);
                  s0[i]=*it;
                  s1.erase(it);
                  s1.insert(temp);
            }
            else{
                  set<ll>::iterator it;
                  it=lower_bound(s1.begin(),s1.end(),s0[i]-k);
                  if(it==s1.end())
                  continue;
                  if(*it>s0[i])
                  continue;
                  k-=(s0[i]-*it);
                  ll temp=s0[i];
                  s0[i]=*it;
                  s1.erase(it);
                  s1.insert(temp);
            }
            if(k<=0){
                  break;
            }
      }
      vector<char> ans(n);
      for(auto &i:s1)
      ans[i]='1';
      for(auto &i:s0)
      ans[i]='0';
      for(auto &i:ans)
      cout<<i;
      cout<<"\n";

      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
