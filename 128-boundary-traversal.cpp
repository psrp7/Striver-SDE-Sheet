#include <bits/stdc++.h>

 

 void traverseLeft(TreeNode<int>* roots,vector<int>&ans){
   if((roots==NULL)||(roots->left==NULL &&roots->right==NULL))
   return;
   ans.push_back(roots->data);
   if(roots->left)
   traverseLeft(roots->left,ans);
   else
   traverseLeft(roots->right,ans);
 }

  void  traverseLeaf(TreeNode<int>* roots,vector<int>&ans){
      if(roots==NULL)
      return ;
      if(roots->left==NULL && roots->right==NULL)
      {
          ans.push_back(roots->data);
          return;
      }

      traverseLeaf(roots->left,ans);
      traverseLeaf(roots->right,ans);

 

 }




  void  traverseRight(TreeNode<int>* root,vector<int>&anss)
  {
   if((root==NULL)||(root->left==NULL &&root->right==NULL))
   return;

   
   if(root->right)
         traverseRight(root->right,anss);

   else    traverseRight(root->left,anss);

   anss.push_back(root->data);

 }

 

vector<int> traverseBoundary(TreeNode<int>* root){

    vector<int>anss;
    if(root==NULL)
    return anss;
    anss.push_back(root->data);
    traverseLeft(root->left,anss);
    traverseLeaf(root->left,anss);
    traverseLeaf(root->right,anss);
    traverseRight(root->right,anss);
    return anss;

 

}

