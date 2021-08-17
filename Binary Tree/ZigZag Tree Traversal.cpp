link-https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

``````

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector <int> res;
        if (root == NULL) 
        return res;
        queue<Node *> q;
        q.push(root);
        int f=1;
    
        while (q.empty() == false)
        {
           vector<int>temp;
           int sz=q.size();
           while(sz--){
               Node* t=q.front();
               temp.push_back(t->data);
               q.pop();
               if(t->left){
                   q.push(t->left);
               }
               if(t->right){
                   q.push(t->right);
               }
           }
           if(f%2==0){
               reverse(temp.begin(),temp.end());
           }
           for(int i=0;i<temp.size();i++){
               res.push_back(temp[i]);
           }
           f++;
        }
        
        return res;
    }
};
