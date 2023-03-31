#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 2e5+5

void solve(){
      ll n,k,q;
      cin>>n>>k>>q;
      vector<ll> v(N,0);
      for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            v[l]++;
            v[r+1]--;
      }
      for(int i=1;i<N;i++){
            v[i]+=v[i-1];
      }
      vector<ll> cnt(N,0);
      for(int i=0;i<N;i++){
            if(v[i]>=k)
            cnt[i]=cnt[i-1]+1;
            else
            cnt[i]=cnt[i-1];
      }
      while(q--){
            int a,b;
            cin>>a>>b;
            cout<<cnt[b]-cnt[a-1];
            cout<<"\n";
      }
      return;

}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
     // cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
