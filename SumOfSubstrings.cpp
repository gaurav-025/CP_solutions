#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      vector<int> pos;
      for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            pos.push_back(i);
      }
      if(pos.size()==0){
            cout<<"0\n";
            return;
      }
      if(pos.size()==1){
            int x=pos[0];
            if(k>=n-1-x){
                  cout<<"1\n";
                  return;
            }
            if(k>=x){
                  cout<<"10\n";
                  return;
            }
            cout<<"11\n";
            return;
      }
      int x=pos[0],y=n-1-pos[pos.size()-1];
      int ans=0;
      if(k>=y){
            ans++;
            swap(s[pos[pos.size()-1]],s[n-1]);
            k-=y;
      }
      if(k>=x){
            ans+=10;
            swap(s[0],s[x]);
      }
      for(int i=1;i<n-1;i++){
            if(s[i]=='1')
            ans+=11;
      }
      cout<<ans<<"\n";
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
