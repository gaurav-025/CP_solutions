#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      if(s.length()<3){
            cout<<s;
            return;
      }
      stack<char> st;
      st.push(s[0]);
      st.push(s[1]);
      st.push(s[2]);
      for(int i=3;i<s.length();i++){
            char t1=st.top();
            st.pop();
            char t2=st.top();
            st.pop();
            char t3=st.top();
            st.pop();
            if(t1==t2 && t2==t3){
                  st.push(t1);
                  st.push(t1);
                  st.push(s[i]);
            }
            else if(t2==t3 && t1==s[i]){
                  st.push(t3);
                  st.push(t2);
                  st.push(t1);
            }
            else{
                  st.push(t3);
                  st.push(t2);
                  st.push(t1);
                  st.push(s[i]);
            }
      }
        char t1=st.top();
            st.pop();
            char t2=st.top();
            st.pop();
            char t3=st.top();
            st.pop();
            if(t1==t2 && t2==t3){
                  st.push(t1);
                  st.push(t1);
            }
            else{
                  st.push(t3);
                  st.push(t2);
                  st.push(t1);
            }
      string ans;
      while(!st.empty()){
            ans+=st.top();
            st.pop();
      }
      reverse(ans.begin(),ans.end());
      cout<<ans;
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

