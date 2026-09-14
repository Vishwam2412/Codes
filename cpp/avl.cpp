#include<bits/stdc++.h>
using namespace std;


class avl{
    
    struct node{
        int data;
        node *left;
        node *right;
        int height;
    }
    node *root = nullptr;

    public:
    
    int findHeight(node *x){
        if(!x)return 0;
        return max( findHeight(x->left) ,findHeight(x->right) + 1 ) ;
    }

    friend node *leftRotaation(node *r);
    friend node * rightRotation(node *r); 
    
    node *insert(node *root , T value){
        if(!root){
            root->data = value;
            root->left = null;
            root->right = null;
            root->height = 0;
            return root;
        }
        
        int rv = root->data ;
        if(rv >= value){
          if(!root->left){
            root->left = new node() ;
            root->left->data = value ;
          } 
          else insert( root->left , value );
        }
        else{
          if(!root->right){
            root->right = new node();
            root->rigth->data = value ;
          }
          else insert(root->right , value);
        }
        root = balanceFunc(root);c:
    }

};


node *leftRotaation(node* r){
    if(!r)return r;
    node *t = r->right ;
    r->right = t->left ;
    t->left = r ;
    return t ;
}


node *rightRotaation(node* r){
    if(!r)return r;
    node *t = r->left ;
    r->left = t->rigth ;
    t->right = r ;
    t->height = 
    return t  ;

}



struct TreeNode{
    int data;
    TreeNode *left ;
    TreeNode *right;
}

int height(TreeNode *r){
    if(!r)return -1;
    int l = height(r->left);
    int r = height(r->right);
    return max(l,r)+1;
}

bool isBalanced(TreeNode*root){
    if(!root)return 1;
    int l = height(root->left);
    int r = height(root->right);
    if(abs(l-r) > 1)return false;
    return isBalanced(l) && isBalanced(r);
}

TreeNode * balance(TreeNode *root){
    bool check = isBalanced(root);
    if(check)return root;
    TreeNode * left = balance(root->left);
    TreeNode * rigth = balance(root->right);

}







void tc(TreeNode *root , vector<int>&v , int i , int n){
    if(i>=n)return;
  if(!root){
      root->data = v[i];
  }
  else if(root->data < v[i]){
      root->left = new TreeNode();
      root->left->data = v[i];
  }else{
      root->right = new TreeNode();
      root->right->data = v[i];
  }
  tc(root , v , i+1 , n);
}


int main(){
    
    return 0;
}
