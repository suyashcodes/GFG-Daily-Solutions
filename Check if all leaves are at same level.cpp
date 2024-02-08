class Solution{ 
  public: 
    /*You are required to complete this method*/ 
      
  int height(Node* root){ 
      if(!root) return 0; 
      int left = height(root->left); 
      int right = height(root->right); 
      return max(left,right)+1; 
  } 
   
  bool solve(Node* root,int hgt,int cnt){ 
      if(!root) return true; 
      if(!root->left && !root->right) return hgt == cnt; 
      return solve(root->left,hgt,cnt+1) && solve(root->right,hgt,cnt+1); 
  } 
    /*You are required to complete this method*/ 
    bool check(Node *root) 
    { 
        int hgt = height(root); 
        int cnt = 1; 
        return solve(root,hgt,cnt); 
    } 
};
