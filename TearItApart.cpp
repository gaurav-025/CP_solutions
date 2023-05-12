#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll x){
      ll sum=0;
      if(x==0)
      return 0;
      while(x){
            sum++;
            x/=2;
      }
      return sum;
}


void solve(){
      string s;
      cin>>s;
      vector<ll> freq(26,0);
      for(int i=0;i<s.length();i++)
      freq[s[i]-'a']++;
      vector<ll> pos[26];
      for(int i=0;i<s.length();i++){
            pos[s[i]-'a'].push_back(i+1);
      }
      ll ans=0;
      ll temp=s.length();
      while(temp!=1){
            ans++;
            temp/=2;
      }
      ll cnt=0;
      for(int i=0;i<26;i++){
            if(freq[i]>0){
                  cnt=-1;
                  ll x=s.length();
                 cnt=max(cnt,f(pos[i][0]-1));
                 if(pos[i].size()==1)
                 cnt=max(cnt,(x-pos[i][0]));
                 else
                 cnt=max(cnt,f(x-pos[i][pos[i].size()-1]));
                 for(int j=1;j<pos[i].size();j++){
                  cnt=max(cnt,f(pos[i][j]-pos[i][j-1]-1));
                 } 
                 ans=min(ans,cnt);
            }
      }
      cout<<ans<<"\n";
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
