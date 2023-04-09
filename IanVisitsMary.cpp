#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int x,y;
      cin>>x>>y;
      if(__gcd(x,y)==1)
      cout<<"1\n"<<x<<" "<<y;
      else{
            cout<<"2\n";
            cout<<1<<" "<<y-1<<"\n";
            cout<<x<<" "<<y;
      }
      cout<<"\n";
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
