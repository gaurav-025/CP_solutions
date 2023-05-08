//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    
        int find(int x,unordered_map<int,int>& parent){
            if(parent[x]==x)
             return x;
             else
             return find(parent[x],parent);
        }
        
        void Union(int x,int y,unordered_map<int,int>& parent,unordered_map<int,int>& rank){
            int a=find(x,parent);
            int b=find(y,parent);
            
            if(a==b) return;
            if(rank[a]>rank[b])
            parent[b]=a;
            else if(rank[a]<rank[b])
            parent[a]=b;
            else{
                parent[b]=a;
                rank[a]++;
            }
        }
        
        long long int numberOfPairs(vector<vector<int>> &pairs,int p,int n)
        {
            // code here
            unordered_map<int,int> parent;
            unordered_map<int,int> rank;
            for(int i=0;i<n;i++){
                parent[i]=i;
                rank[i]=0;
            }
            for(auto &i:pairs){
                Union(i[0],i[1],parent,rank);
            }
            vector<long long> s(n,0);
            for(int i=0;i<n;i++){
                s[find(i,parent)]++;
            }
            long long x=n,ans=0;
            for(int i=0;i<n;i++){
                long long y=s[i];
                x-=y;
                ans+=x*y;
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        vector<vector<int>> pairs(p,vector<int>(2));
        for(auto &i:pairs)
            for(auto &j:i)
                cin>>j;
        Solution a;
        cout<<a.numberOfPairs(pairs,p,n)<<endl;
    }
}
// } Driver Code Ends
