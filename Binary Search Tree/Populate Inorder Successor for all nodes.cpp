Input:
           10
       /  \
      8    12
     /
    3
  

Output: 3->8 8->10 10->12 12->-1
Explanation: The inorder of the above tree is :
3 8 10 12. So the next pointer of node 3 is 
pointing to 8 , next pointer of 8 is pointing
to 10 and so on.And next pointer of 12 is
pointing to -1 as there is no inorder successor 
of 12.

``````````


class Solution
{
public:
   
    void solve(Node* root,Node* &prev){
        if(!root){
            return;
        }
        solve(root->left,prev);
        if(prev!=NULL){
            prev->next=root;
        }
        prev=root;
        solve(root->right,prev);
    }
    void populateNext(Node *root)
    {
        //code here
        Node* prev=NULL;
        solve(root,prev);
         
    }
};
