#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n;
      cin>>n;
      ll sum=0;
      while(n!=1){
            sum+=n;
            n/=2;
      }
      sum++;
      cout<<sum<<"\n";
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
