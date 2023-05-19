#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      set<string> st;
      for(int i=0;i<n-1;i++){
            string temp;
            temp+=s[i];
            temp+=s[i+1];
            st.insert(temp);
      }
      cout<<st.size()<<"\n";
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
