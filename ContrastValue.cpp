#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n),v1(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
            v1[i]=v[i];
      }
      sort(v1.begin(),v1.end());
      if(v1[0]==v1[n-1]){
            cout<<"1\n";
            return;
      }
      int cnt=0;
      int flag=0;
      for(int i=1;i<n-1;i++){
            if(v[i]<=v[i-1] && v[i+1]<=v[i]){
                  while(i+1<n && v[i]<=v[i-1] && v[i+1]<=v[i]){
                        i++;
                  }
                  if(i==n-1)
                  continue;
                  cnt++;
            }
            else if(v[i]>=v[i-1] && v[i+1]>=v[i]){
                  while(i+1<n && v[i]>=v[i-1] && v[i+1]>=v[i])
                  i++;
                  if(i==n-1)
                  continue;
                  cnt++;
            }
            else{
                  //i++;
                  cnt++;
            }
      }
      int ans=cnt+2;
      cnt=0;
       for(int i=1;i<n-1;i++){
            if(v[i]>=v[i-1] && v[i+1]>=v[i]){
                  while(i+1<n && v[i]>=v[i-1] && v[i+1]>=v[i])
                  i++;
                  if(i==n-1)
                  continue;
                  cnt++;
            }
            else if(v[i]<=v[i-1] && v[i+1]<=v[i]){
                  while(i+1<n && v[i]<=v[i-1] && v[i+1]<=v[i]){
                        i++;
                  }
                  if(i==n-1)
                  continue;
                  cnt++;
            }
            else{
                 // i++;
                  cnt++;
            }
      }
      ans=min(ans,cnt+2);
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
