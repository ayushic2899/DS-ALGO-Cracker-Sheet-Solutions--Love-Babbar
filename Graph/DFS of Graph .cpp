link-https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

``````

class Solution 
{
    public:
	 
	vector<int>v;
	void solve(int i,vector<int>&vis,vector<int>adj[]){
	    vis[i]=1;
	    v.push_back(i);
	    for(auto x:adj[i]){
	        if(!vis[x]){
	            solve(x,vis,adj);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	     
	    vector<int>vis(V,0);
	    solve(0,vis,adj);
	    return v;
	}
};
