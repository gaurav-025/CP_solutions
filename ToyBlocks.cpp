#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      ll sum=0;
      for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
      }
      sort(v.begin(),v.end());
      ll x=v[n-1]*(n-1);
      if(sum>x){
            ll r=(sum%(n-1));
            if(r==0){
                  cout<<"0\n";
                  return;
            }
            r=(n-1)-r;
            cout<<r<<"\n";
            return;
      }
      if(sum==x){
            cout<<"0\n";
            return;
      }
      ll a=x-sum;
      cout<<a<<"\n";
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
