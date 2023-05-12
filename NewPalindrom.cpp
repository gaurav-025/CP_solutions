#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      int l=s.length();
      vector<int> v(26,0);
      for(int i=0;i<l;i++){
            v[s[i]-'a']++;
      }
      int cnt=0;
      int cnt2=0;
      for(int i=0;i<26;i++){
            if(v[i]==l){
                  cout<<"NO\n";
                  return;
            }
            if(v[i]>0)
            cnt++;
            if(v[i]==1)
            cnt2++;
      }
      if(cnt>2){
            cout<<"YES\n";
            return;
      }
      if(l%2==0){
            cout<<"YES\n";
            return;
      }
      if(cnt2>=1){
            cout<<"NO\n";
            return;
      }
      cout<<"YES\n";
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
