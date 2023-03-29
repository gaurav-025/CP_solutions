#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      if(n%2==1){
            ll ans=0;
            for(int i=1;i<n;i+=2){
                  if(i==n-1) continue;
                  else if(v[i]>v[i+1] && v[i]>v[i-1]) continue;
                  else 
                  ans+=abs(v[i]-max(v[i-1],v[i+1]))+1;
            }
            cout<<ans<<"\n";
            return;
      }
      ll ans=1e18;
      ll cnt=0;
      for(int i=1;i<n;i+=2){
            if(i==n-1) continue;
            else if(v[i]>v[i+1] && v[i]>v[i-1]) continue;
            else
            cnt+=max(v[i-1],v[i+1])+1-v[i];
      }
      ans=min(ans,cnt);
      for(int i=n-2;i>0;i-=2){
            if(max(v[i],v[i-2])>=v[i-1]){
                  cnt-=(max(v[i],v[i-2])+1-v[i-1]);
            }
            if(v[i]<=v[i-1] || v[i]<=v[i+1]) 
            cnt+=abs(v[i]-max(v[i-1],v[i+1]))+1;

            ans=min(ans,cnt);
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

