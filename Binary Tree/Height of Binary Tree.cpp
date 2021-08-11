class Solution{
    public: 
    int height(struct Node* node){
         int count=0;
        if(node==NULL){
            return 0;
        }
        int x=height(node->left);
        int y=height(node->right);
        int ans=max(x,y)+1;
        return ans;
    }
};
