#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int x=0;
      for(int i=0;i<n;i++){
            if(s[i]=='(')
            x++;
      }
      if(2*x!=n){
            cout<<"-1\n";
            return;
      }
      vector<int> a,b;
      int i=0;
      while(i<n){
            int cnt=0;
            if(s[i]=='('){
                  cnt++;
                  a.push_back(i);
                  i++;
                  while(cnt){
                        if(s[i]=='(')
                        cnt++;
                        else
                        cnt--;
                        a.push_back(i);
                        i++;
                  }
            }
            else{
                  cnt++;
                  b.push_back(i);
                  i++;
                  while(cnt){
                        if(s[i]==')')
                        cnt++;
                        else
                        cnt--;
                        b.push_back(i);
                        i++;
                  }
            }
      }
      if(a.size()==0 || b.size()==0){
            cout<<"1\n";
            for(int i=0;i<n;i++)
            cout<<"1 ";
            cout<<"\n";
            return;
      }
      vector<int> ans(n);
      for(auto &j:a){
            ans[j]=1;
      }
      for(auto &j:b){
            ans[j]=2;
      }
      cout<<"2\n";
      for(auto &j:ans)
      cout<<j<<" ";
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
