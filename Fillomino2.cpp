#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
      int n;
      cin>>n;
      vector<vector<int>> mat(n,vector<int>(n,-1));
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mat[i][i]=x;
      }
      for(int i=0;i<n;i++){
            int cnt=mat[i][i]-1;
            int r=i,c=i;
            while(cnt--){
                  if(c-1>=0 && mat[r][c-1]==-1){
                        mat[r][c-1]=mat[i][i];
                        c--;
                        //cnt--;
                        continue;
                  }
                  r++;
                  mat[r][c]=mat[i][i];
            }
      }
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  if(i>=j){
                        cout<<mat[i][j]<<" ";
                  }
            }
            cout<<"\n";
      }
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

