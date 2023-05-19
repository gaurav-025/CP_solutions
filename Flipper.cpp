#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      int ind=0;
      for(int i=0;i<n;i++){
            if(v[i]==n){
                  ind=i;
                  break;
            }
      }
      vector<int> ans(n);
      int cnt=0;
      if(ind==n-1){
            ans[cnt++]=v[ind];
            if(v[ind-1]<=v[0]){
                  for(int i=0;i<ind;i++){
                        ans[cnt++]=v[i];
                  }
            }
            else{
                  int t=ind-1;
                  while(t>=0 && v[t]>v[0]){
                        t--;
                  }
                  for(int i=ind-1;i>t;i--)
                  ans[cnt++]=v[i];
                  for(int i=0;i<=t;i++)
                  ans[cnt++]=v[i];
            }
      }
      else if(ind==0){
            for(int i=0;i<n;i++){
                  if(v[i]==n-1){
                        ind=i;
                        break;
                  }
            }
            ans[cnt++]=v[ind];
            if(ind==n-1){
                  for(int i=0;i<ind;i++)
                  ans[cnt++]=v[i];
            }
            else{
                  for(int i=ind+1;i<n;i++)
                  ans[cnt++]=v[i];
                  ans[cnt++]=v[ind-1];
                  for(int i=0;i<ind-1;i++)
                  ans[cnt++]=v[i];
            }
      }
      else{
            for(int i=ind;i<n;i++)
            ans[cnt++]=v[i];
            //ans[cnt++]=v[ind-1];
            int t=ind-2;
            while(t>=0 && v[t]>v[0]){
                  t--;
            }
            for(int i=ind-1;i>t;i--){
                  ans[cnt++]=v[i];
            }
            for(int i=0;i<=t;i++)
            ans[cnt++]=v[i];
      }
      for(int i=0;i<n;i++)
      cout<<ans[i]<<" ";
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
