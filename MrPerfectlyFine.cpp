#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      int a=INT_MAX,b=INT_MAX;
      int ans=INT_MAX;
      for(int i=0;i<n;i++){
            int x;
            string s;
            cin>>x;
            cin>>s;
            if(s[0]=='1' && s[1]=='1'){
                  ans=min(ans,x);
            }
            if(s[0]=='1'){
                  a=min(a,x);
            }
            if(s[1]=='1'){
                  b=min(b,x);
            }

      }
      if(a==INT_MAX || b==INT_MAX){
            cout<<"-1\n";
            return;
      }
      cout<<min(a+b,ans)<<"\n";
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
