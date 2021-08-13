## Recursive Implementation

void preorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

## Iterative Implementation

void preorderIterative(Node* root)
{
    if (root == nullptr)
    return;
    stack<Node*> stack;
    stack.push(root);
  
    while (!stack.empty())
    {
        Node* curr = stack.top();
        stack.pop();
 
        cout << curr->data << " "; 
        if (curr->right) {
            stack.push(curr->right);
        } 
        if (curr->left) {
            stack.push(curr->left);
        } 
    }
}
 


