link-https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution {
  public:
     
    int m;
     int func(struct Node* root){
        if(root==NULL){
           return 0;
        }
      int x=func(root->left);
      int y=func(root->right);
      m=max(m,x+y+1);
      return (max(x,y)+1); 
    }
    int diameter(struct Node* root) {
       m=-2147483648;
       int x=func(root);
       return m;
    }
};
