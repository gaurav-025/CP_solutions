#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      int m=__builtin_popcount(n);
      int M=n;
      if(k<m || k>M){
            cout<<"NO\n";
            return;
      }
      multiset<int> s;
      int a=0;
      while(true){
            if(n & (1<<a))
            s.insert(-(1<<a));
            a++;
            if(1<<a > n)
            break;
      }
      int cnt=s.size();
      while(cnt!=k){
            int x=-(*s.begin());
            s.erase(s.begin());
            x/=2;
            s.insert(-x);
            s.insert(-x);
            cnt++;
      }
      cout<<"YES\n";
      for(auto &i:s)
      cout<<-i<<" ";

      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
     // cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
