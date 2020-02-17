void morrisTraversal(Node *root){
  if(root==NULL){
    return;
  }
  Node *current = root;
  while(current!=NULL){
    if(current->left==NULL){
      cout<<current->data<<" ";
      current = current->right;
    }else{
      Node *tmp = current->left;
      while(tmp->right!=NULL&tmp->right!=current){
        tmp = tmp->right;
      }
      if(tmp->right==NULL){
        tmp->right = current;
        current = current->left;
      }else{
        tmp->right = NULL;
        cout<<current->data<<" ";
        current = current->right;
      }
    }
  }
}
