\#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      string st;
      st=s;
      sort(st.begin(),st.end());
      if(st[0]==st[s.length()-1]){
            cout<<"-1\n";
            return;
      }
      cout<<s.length()-1<<"\n";
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
