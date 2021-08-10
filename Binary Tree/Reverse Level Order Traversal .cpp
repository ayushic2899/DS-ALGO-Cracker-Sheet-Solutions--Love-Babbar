vector<int> reverseLevelOrder(Node *root)
{
        queue<Node *> q;
        vector<int>Stack;
        q.push(root);
        while (q.empty() == false)
        {
            
            Node *root = q.front();
            Stack.push_back(root->data);
            q.pop();
            if (root->right != NULL)
                q.push(root->right);
            if (root->left != NULL)
                q.push(root->left);
        }
        reverse(Stack.begin(),Stack.end());
        return Stack;
}
 
