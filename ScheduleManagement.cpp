#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll>& freq,ll mid,ll n){
      ll cnt=0;
      ll x=0;
      for(int i=1;i<=n;i++){
            int num1=min(mid,freq[i]);
            int num2=(mid-num1)/2;
            cnt+=(num2);
            x+=freq[i]-min(freq[i],mid);
      }
      if(cnt>=x) return true;
      return false;
}

void solve(){
      ll n,m;
      cin>>n>>m;
      vector<ll> v(m);
      vector<ll> freq(n+1,0);
      for(int i=0;i<m;i++){
            cin>>v[i];
            freq[v[i]]++;
      }
      ll l=1,r=2*m;
      ll ans;
      while(l<=r){
            int mid=(l+r)/2;
            if(check(freq,mid,n)){
                  ans=mid;
                  r=mid-1;
            }
            else{
                  l=mid+1;
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
