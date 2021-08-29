link-https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

`````````


class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool solve(int i,vector<int>&vis,vector<int>&order,vector<int> adj[]){
        vis[i]=1;
        order[i]=1;
        for(auto x:adj[i]){
            if(!vis[x]){
                bool r=solve(i,vis,order,adj);
                if(r==true){
                    return true;
                }
            }
            else if(order[x]){
                return true;
            }
        }
        order[i]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>order(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool c=solve(i,vis,order,adj);
                if(c==true){
                    return true;
                }
            }
            
        }
        return false;
    }
};
