#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll k,n,a,b;
      cin>>k>>n>>a>>b;
      ll x=n*a;
      if(x<k){
            cout<<n<<"\n";
            return;
      }      
      x-=k;
      x++;
      ll y=a-b;
      x=(x+y-1)/y;
      if(x>n){
            cout<<"-1\n";
            return;
      }
      cout<<n-x<<"\n";
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

