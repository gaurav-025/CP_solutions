#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      if(n==1){
            cout<<"-1\n";
            return;
      }
      cout<<n<<" "<<n+1<<" "<<n*(n+1);
      
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
    //  cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
