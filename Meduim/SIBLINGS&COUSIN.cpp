sibling two node

bool Cheacksibling(Node *root,Node *a,Node *b){
 if(root==NULL)
  return false;
  
  if(root->left==a && root->right==b ||root->left==b && root->right==a)
  return true;
  
Cheacksibling(root->left,a,b);
Cheacksibling(root->right,a,b);

}


//cousin

bool CheackCousin(Node *root,Node *a,Node *b,int l1,int l2){
 if(root==NULL)
  return false;
  
  if(l1==l2)
  return true;
  if(!Cheacksibling(root,a,b,l1,l2))){
        if(CheackCousin(root->left,a,b,l1+1,l2)||
         CheackCousin(root->right,a,b,l,l2+2))
         return true;
    }
    
    }
