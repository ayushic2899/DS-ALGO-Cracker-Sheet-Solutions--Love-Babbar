link-https://practice.geeksforgeeks.org/problems/choose-and-swap0531/1#

Example 1:

Input:
A = "ccad"
Output: "aacd"
Explanation:
In ccad, we choose ‘a’ and ‘c’ and after 
doing the replacement operation once we get, 
aacd and this is the lexicographically
smallest string possible. 
  
  ```````````


bool isCyclic(int node,int parent,vector<int> &vis,vector<int>adj[]){
    
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(isCyclic(it,node,vis,adj)) return true;
        }
        else if(it!=parent) return true;
    }
    return false;
}
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int> vis(V,0);
    
    for(int i = 0; i < V; i++){
        if(!vis[i]){
            if(isCyclic(i,-1,vis,adj))
                return true;
        }
    }
    return false;
	}
