#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f1(string& s,int l){
      int m=10;
      for(int i=0;i<l;i++)
      m=min(m,s[i]-'0');

      return m;
}

int f2(string& s,int l){
      int M=-1;
      for(int i=0;i<l;i++)
      M=max(M,s[i]-'0');

      return M;
}

void solve(){
      ll l,r;
      cin>>l>>r;
      string s1,s2;
      s1=to_string(l);
      s2=to_string(r);
      if(s1.length()<s2.length()){
            for(int i=0;i<s1.length();i++)
            cout<<"9";
            cout<<"\n";
            return;
      }
      int diff=-1;
      for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                  diff=i;
                  break;
            }
      }
      if(diff==-1){
            cout<<s1<<'\n';
            return;
      }
      string ans;
      int m=f1(s1,s1.length());
      int M=f2(s1,s1.length());
      int cnt=M-m;
      ans=s1;
      m=f1(s2,s2.length());
      M=f2(s2,s2.length());
      if(min(cnt,M-m)!=cnt){
            cnt=M-m;
            ans=s2;
      }
      for(int i=diff+1;i<s1.length();i++){
            for(int j=s1[i]-'0'+1;j<10;j++){
                  m=min(f1(s1,i),j);
                  M=max(f2(s1,i),j);
                  int x=M-m;
                  if(min(cnt,x)!=cnt){
                        cnt=x;
                        ans=s1;
                        for(int k=i;k<s1.length();k++)
                        ans[k]=char(j+'0');
                  }
            }
      }

      for(int i=diff+1;i<s2.length();i++){
            for(int j=0;j<s2[i]-'0';j++){
                  m=min(f1(s2,i),j);
                  M=max(f2(s2,i),j);
                  int x=M-m;
                  if(min(cnt,x)!=cnt){
                        cnt=x;
                        ans=s2;
                        for(int k=i;k<s2.length();k++)
                        ans[k]=char(j+'0');
                  }
            }
      }

      for(int i=s1[diff]-'0'+1;i<s2[diff]-'0';i++){
            m=min(f1(s1,diff),i);
            M=max(f2(s1,diff),i);
            int x=M-m;
            if(min(cnt,x)!=cnt){
                  cnt=x;
                  ans=s1;
                  for(int j=diff;j<s1.length();j++)
                  ans[j]=char(i+'0');
            }
      }
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

