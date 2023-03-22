#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      int ans=0;
      for(int k=1;k<=n;k++){
            multiset<int> s(v.begin(),v.end());
            for(int i=0;i<k;i++){
                  multiset<int>::iterator it=s.upper_bound(k-i);
                  if(it==s.begin())
                  break;
                  s.erase(--it);
                  if(!s.empty()){
                        int temp=*s.begin();
                        s.erase(s.begin());
                        s.insert(temp+k-i);
                  }
            }
            if(s.size()+k==n)
            ans=k;
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
