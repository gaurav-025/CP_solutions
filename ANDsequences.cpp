#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll m=1e9+7;

ll mul(ll a,ll b){
      return ((a%m)*(b%m))%m;
}

ll fact[200005];
void f(){
      fact[0]=1;
      fact[1]=1;
      fact[2]=2;
      for(ll i=3;i<200005;i++){
            fact[i]=mul(fact[i-1],i);
      }
}

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      sort(v.begin(),v.end());
      ll cnt=1;
      for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1])
            cnt++;
            else
            break;
      }
      if(cnt<2){
            cout<<"0\n";
            return;
      }
      for(int i=0;i<n;i++){
            if((v[0] & v[i])!=v[0]){
                  cout<<"0\n";
                  return;
            }
      }
      ll ans;
      ans=mul(cnt,mul(cnt-1,fact[n-2]));
      cout<<ans<<"\n";
      return;

}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      f();
      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}

