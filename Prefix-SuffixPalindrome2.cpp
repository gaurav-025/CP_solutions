#include<bits/stdc++.h>
using namespace std;
#define ll long long

string LongestPalindromicPrefix(string str)
{

    string temp = str + '?';
    reverse(str.begin(), str.end());
    temp += str;
    int n = temp.length();
    int lps[n];
    fill(lps, lps + n, 0);
    for (int i = 1; i < n; i++) {
        int len = lps[i - 1];
        while (len > 0
               && temp[len] != temp[i]) {
            len = lps[len - 1];
        }
        if (temp[i] == temp[len]) {
            len++;
        }
        lps[i] = len;
    }
 
   
    return temp.substr(0, lps[n - 1]);
}
 

void solve(){
      string s;
      cin>>s;
      int l=s.length();
      // vector<int> pos[26];
      // for(int i=0;i<l;i++){
      //       pos[s[i]-'a'].push_back(i);
      // }
      string a,b;
      int ind=-1;
      for(int i=0;i<l;i++){
            if(s[i]==s[l-1-i]){
                  a+=s[i];
                  b+=s[l-1-i];
            }
            else{
                  ind=i;
                  break;
            }
      }
      if(ind==-1){
            cout<<s<<"\n";
            return;
      }
      
      string ans;
      ans+=a;

      string t;
      t+=s.substr(ind,l-1-ind-ind+1);
      string x;
      x+=LongestPalindromicPrefix(t);
      reverse(t.begin(),t.end());
      string y;
      y+=LongestPalindromicPrefix(t);
      ans+=(x.length()>=y.length() ? x:y);
      reverse(b.begin(),b.end());
      ans+=b;
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
