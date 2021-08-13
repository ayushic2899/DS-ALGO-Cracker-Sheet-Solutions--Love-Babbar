link-https://practice.geeksforgeeks.org/problems/mirror-tree/1#

class Solution {
  public:
     
    void mirror(Node* node) {
          if(!node) return;
        
         mirror(node->left);
         mirror(node->right);
         swap(root->left,root->right);
    }
};
