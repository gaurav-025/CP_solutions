#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,s1,s2;
      cin>>n>>s1>>s2;
      vector<pair<ll,int>> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
      }
      sort(v.rbegin(),v.rend());
      vector<ll> a,b;
      ll cnt1=0,cnt2=0;
      for(int i=0;i<n;i++){
            ll x=(cnt1+1)*s1*v[i].first;
            ll y=(cnt2+1)*s2*v[i].first;
            if(x>=y){
                  b.push_back(v[i].second);
                  cnt2++;
            }
            else{
                  a.push_back(v[i].second);
                  cnt1++;
            }
      }
      cout<<a.size()<<" ";
      for(auto &i:a)
      cout<<i<<" ";
      cout<<"\n";
      cout<<b.size()<<" ";
      for(auto &i:b)
      cout<<i<<" ";
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
