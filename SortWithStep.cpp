#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      vector<int> v(n+1);
      for(int i=1;i<=n;i++)
      cin>>v[i];
      vector<int> diff(n+1);
      for(int i=1;i<=n;i++){
            diff[i]=abs(i-v[i]);
      }
      int cnt=0;
      for(int i=1;i<=n;i++){
            if(diff[i]%k!=0)
            cnt++;
      }
      if(cnt==0){
            cout<<"0\n";
            return;
      }
      if(cnt>2){
            cout<<"-1\n";
            return;
      }
            vector<int> temp;
            for(int i=1;i<=n;i++){
                  if(diff[i]%k!=0)
                  temp.push_back(i);
            }
      if(cnt==2){
            swap(v[temp[0]],v[temp[1]]);
            int x=abs(v[temp[0]]-temp[0]);
            int y=abs(v[temp[1]]-temp[1]);
            if(x%k!=0 || y%k!=0){
                  cout<<"-1\n";
                  return;
            }
            cout<<"1\n";
            return;
      }
      for(int i=1;i<=n;i++){
            swap(v[temp[0]],v[i]);
            int x=abs(v[temp[0]]-temp[0]);
            int y=abs(v[i]-i);
            if(x%k==0 && y%k==0){
                  cout<<"1\n";
                  return;
            }
            swap(v[temp[0]],v[i]);
      }
      cout<<"-1\n";
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
