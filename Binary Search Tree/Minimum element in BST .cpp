link-https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1#

````

int minValue(Node* root)
{ 
    if(root == NULL){
        return -1;
    }
    else{
        while(root->left != NULL){
            root=root->left;
        }
        return root->data;
    }
}
