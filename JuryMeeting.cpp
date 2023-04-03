#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=200005;
ll facInv[N + 1];
ll numInv[N + 1];
ll f[N + 1];
void num_inv(ll m)
{
    numInv[0] = numInv[1] = 1;
    for (int i = 2; i <= N; i++)
        numInv[i] = numInv[m % i] * (m - m / i) % m;
}
void f_inv(ll m)
{
    facInv[0] = facInv[1] = 1;
    for (int i = 2; i <= N; i++)
        facInv[i] = (numInv[i] * facInv[i - 1]) % m;
}
void factorial(ll m)
{
    f[0] = 1;
    for (int i = 1; i <= N; i++) {
        f[i] = (f[i - 1] * i) % m;
    }
}
ll binomial_coeff(ll N, ll R, ll m)
{
    ll ans = ((f[N] * facInv[R])
              % m * facInv[N - R])
             % m;
    return ans;
}
void calc()
{
    ll m = 998244353;
    num_inv(m);
    f_inv(m);
    factorial(m);
}

ll mul(ll a,ll b){
      return ((a%998244353)*(b%998244353))%998244353;
}

void solve(){
      int n;
      cin>>n;
      ll m=-1;
      vector<ll> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
            m=max(m,v[i]);
      }
      int cnt1=0;
      for(int i=0;i<n;i++){
            if(v[i]==m)
            cnt1++;
      }
      if(cnt1>=2){
            cout<<f[n]<<"\n";
            return;
      }
      ll cnt=0;
      for(int i=0;i<n;i++){
            if(v[i]==m-1)
            cnt++;
      }
      if(cnt==0){
            cout<<"0\n";
            return;
      }
      ll ans=(mul(f[n],cnt)+998244353)%998244353;
      ans=mul(ans,numInv[cnt+1]);
      cout<<ans<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      
      calc();

      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
