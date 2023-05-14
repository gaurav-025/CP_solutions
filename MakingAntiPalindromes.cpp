#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      if(n & 1){
            cout<<"-1\n";
            return;
      }
      vector<int> freq(26,0);
      for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
      }
      for(int i=0;i<26;i++){
            if(2*freq[i]>n){
                  cout<<"-1\n";
                  return;
            }
      }
      vector<int> cnt(26,0);
      int sum=0;
      int a=0,b=n-1;
      while(a<b){
            if(s[a]==s[b]){
                  sum++;
                  cnt[s[a]-'a']++;
            }
            a++;
            b--;
      }
      for(int i=0;i<26;i++){
            if(2*cnt[i]>sum){
                  cout<<cnt[i]<<"\n";
                  return;
            }
      }
      cout<<(sum+1)/2<<"\n";
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
