#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e7+1;

int primes[N];

void pre(){
      for(int i=2;i<N;i++){
            primes[i]=i;
      }
      for(int i=2;i<N;i++){
            if(primes[i]!=i)
            continue;
            for(int j=2*i;j<N;j+=i){
                  primes[j]=min(primes[j],i);
            }
      }
}

vector<ll> func(ll n){
      vector<ll> v;
      while(n>1){
            if(v.empty() || v.back()!=primes[n])
            v.push_back(primes[n]);
            n/=primes[n];
      }
      return v;
}

void solve(){
      ll x,y;
      cin>>x>>y;
      if(__gcd(x,y)!=1){
            cout<<"0\n";
            return;
      }
      ll diff=y-x;
      if(diff==1){
            cout<<"-1\n";
            return;
      }
     
      ll ans=1e18;
      for(auto &i:func(diff)){
            ll temp=x%i;
            temp=i-temp;
            ans=min(ans,temp);
      }
      cout<<ans<<"\n";
      return;

}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      
      pre();
      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}