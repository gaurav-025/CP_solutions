#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      stack<char> st;
      int cnt=0;
      for(int i=0;i<s.length();i++){
            if(st.empty()){
                  st.push(s[i]);
                  continue;
            }
            if(st.top()=='(' && s[i]==')'){
                  cnt++;
                  st.pop();
            }
            else{
                  st.push(s[i]);
            }
      }
      cout<<2*cnt;
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
