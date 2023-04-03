#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
      int n,k;
      cin>>n>>k;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      sort(v.begin(),v.end());
      int cnt=1;
      int ans=-1;
      for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                  cnt++;
            }
            else{
                  ans=max(ans,cnt);
                  cnt=1;
            }
      }
      ans=max(ans,cnt);
      if(ans>=k){
            cout<<"0\n";
            return;
      }
      int x=v[n-k];
      ans=INT_MAX;
      for(int i=0;i<=x;i++){
            int cnt1=0,cnt2=0,cnt3=0;
            for(int j=0;j<n;j++){
                  int cnt4=0;
                  if(v[j]<i)
                  continue;
                  if(v[j]==i){
                        cnt2++;
                        if(cnt3+cnt2>=k){
                              ans=min(ans,cnt1);
                              break;
                        }
                        continue;
                  }
                  int temp=v[j];
                  while(temp>i){
                        cnt4++;
                        temp/=2;
                  }
                  if(temp==i){
                        cnt3++;
                        cnt1+=cnt4;
                  }
                  if(cnt3+cnt2>=k){
                        ans=min(ans,cnt1);
                        break;
                  }
            }
      }
      cout<<ans<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
      //cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
