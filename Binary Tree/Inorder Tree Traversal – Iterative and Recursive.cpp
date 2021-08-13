### Recursive Implementation

void inorder(Node* root)
{
    // return if the current node is empty
    if (root == nullptr) {
        return;
    }
 
    // Traverse the left subtree
    inorder(root->left);
 
    // Display the data part of the root (or current node)
    cout << root->data << " ";
 
    // Traverse the right subtree
    inorder(root->right);
}

 ``````
 
###  Iterative Implementation
 
 void inorderIterative(Node* root)
{
   
    stack<Node*> stack;
    Node* curr = root;
    while (!stack.empty() || curr != nullptr)
    {
        
        if (curr != nullptr)
        {
            stack.push(curr);
            curr = curr->left;
        }
        else {

            curr = stack.top();
            stack.pop();
            cout << curr->data << " ";
 
            curr = curr->right;
        }
    }
}
