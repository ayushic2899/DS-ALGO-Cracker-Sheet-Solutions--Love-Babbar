link-https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1#

````

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    void top(struct Node* root){
         map<int,int>m;
        queue<pair<Node*,int>>q;
        if(!root){
            return;
        }
        q.push({root,0});
        while(!q.empty()){
            Node* t=q.front().first;
            int h=q.front().second;
            q.pop();
            if(!m[h]){
                m[h]=t->data;
            }
            if(t->left){
                q.push({t->left,h-1});
            }
            if(t->right){
                q.push({t->right,h+1});
            }
        }
        for(auto x:m) cout<<x.second<<" ";
    }
     

};
