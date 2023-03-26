#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      int m=INT_MAX;
      for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1)
            m=i;
      }
      for(int i=m;i>0;i--){
            swap(v[i],v[i-1]);
      }
      int prev=m+1;
      int ind;
      while(prev<n){
            m=INT_MAX;
            for(int i=prev;i<n;i++){
                  if(v[i]<m){
                        ind=i;
                        m=v[i];
                  }
            }
            for(int i=ind;i>prev;i--){
                  swap(v[i],v[i-1]);
            }
            if(v[prev]<v[prev-1]){
                  swap(v[prev],v[prev-1]);
            }
            prev=ind+1;
      }
      for(auto &i:v)
      cout<<i<<" ";
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

