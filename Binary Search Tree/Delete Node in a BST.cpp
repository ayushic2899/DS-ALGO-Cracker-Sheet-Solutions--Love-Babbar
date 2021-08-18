/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

link=https://leetcode.com/problems/delete-node-in-a-bst/

``````


class Solution {
public:
     static TreeNode* insuc(TreeNode* root){
         TreeNode* p=root->right;
         while(p->left){
            p=p->left; 
         }
         return p;
     }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr; 
        if(key < root->val) root->left=deleteNode(root->left,key);
        else if(key > root->val) root->right=deleteNode(root->right,key);
        else{
             if(!root->left) {
                 TreeNode* temp=root->right;
                 delete(root);
                 return temp;
             }
            else if(!root->right) {
                 TreeNode* temp=root->left;
                 delete(root);
                 return temp;
             }
            else{
               TreeNode* temp=insuc(root);
                swap(root->val,temp->val);
                root->right=deleteNode(root->right,key);
            }
        }
        return root;
    }
};

 
