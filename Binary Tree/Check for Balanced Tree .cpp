link-https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

``````````````

class Solution{
    public:
   
    int isBalance(Node* root){
        if(root==NULL){
            return 0;
        }
        int lf=isBalance(root->left);
        if(lf==-1){
            return -1;
        }
        int rh=isBalance(root->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lf-rh)>1){
            return -1;
        }
        else{
            return 1+max(lf,rh);
        }
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(isBalance(root)==-1){
            return false;
        }
        return true;
    }
};
