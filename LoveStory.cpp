#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      string c="codeforces";
      int cnt=0;
      for(int i=0;i<10;i++){
            if(c[i]!=s[i])
            cnt++;
      }
      cout<<cnt<<"\n";
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
