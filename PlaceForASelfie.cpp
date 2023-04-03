#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,m;
      cin>>n>>m;
      vector<ll> k(n);
      for(int i=0;i<n;i++)
      cin>>k[i];
      sort(k.begin(),k.end());
      while(m--){
            ll a,b,c;
            cin>>a>>b>>c;
            if(a*c<=0){
                  cout<<"NO\n";
                  continue;
            }
            ll l=0,r=1e10;
            ll x,y=-1;
            while(l<=r){
                  ll mid=(l+r)/2;
                  if(mid*mid==4*a*c){
                        y=mid;
                        x=mid;
                        break;       
                  }
                  else if(mid*mid>4*a*c){
                        r=mid-1;
                  }
                  else{
                        x=mid;
                        l=mid+1;
                  }
            }
            ll y1=b-x,y2=b+x;
            int p=0,q=n-1;
            bool ans=true;
            if(y!=-1){
            while(p<=q){
                  int mid=(p+q)/2;
                  if(k[mid]>y1 && k[mid]<y2){
                        cout<<"YES\n";
                        cout<<k[mid]<<"\n";
                        ans=false;
                        break;
                  }
                  else if(k[mid]>=y2){
                        q=mid-1;
                  }
                  else{
                        p=mid+1;
                  }
            }}
            else{
                  while(p<=q){
                        int mid=(p+q)/2;
                        if(k[mid]>=y1 && k[mid]<=y2){
                              cout<<"YES\n";
                              cout<<k[mid]<<"\n";
                              ans=false;
                              break;
                        }
                        else if(k[mid]>y2){
                              q=mid-1;
                        }
                        else{
                              p=mid+1;
                        }
                  }
            }
            if(ans)
            cout<<"NO\n";
      }
      cout<<"\n";
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
