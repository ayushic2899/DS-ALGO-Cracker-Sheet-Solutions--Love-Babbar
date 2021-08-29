link-https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#

```````````````


class Solution {
  public:
    // Function to detect cycle in an undirected graph.
     bool solve(int i,int parent,vector<int>adj[],vector<bool>&vis){
        vis[i]=true;
        for(auto x:adj[i]){
            if(!vis[x]){
                bool r=solve(i,parent,adj,vis);
                if(r==true){
                    return true;
                }
            }
            else if(x!=parent){
                return true;
            }
        }
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool c=solve(i,-1,adj,vis);
                if(c==true){
                    return true;
                }
            }
            
        }
        return false;
    }
};
