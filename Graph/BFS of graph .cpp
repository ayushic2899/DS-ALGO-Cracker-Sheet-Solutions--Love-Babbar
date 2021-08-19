link- https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#

``````

class Solution
{
    public:
	vector<int>bfsOfGraph(int v, vector<int> adj[])
	{
	    
	    vector<int>v1;
	    queue<int>q;  
	    q.push(0);   
	    vector<int>vis(v,0);
	    vis[0]=1;   
	    while(!q.empty()){
	        int td=q.front();   
	        q.pop();
	        v1.push_back(td);   
	        for(auto x:adj[td]){   
	            if(!vis[x]){
	                vis[x]=1;
	                q.push(x);
	            }
	        }
	    }
	    return v1;
	}
};
