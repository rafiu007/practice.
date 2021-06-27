class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    map<int,int>mp;
    int getMaxWidth(Node* root) {

        // Your code here
        sum(root,0);
        int ans=-1000000000;
        for( auto a:mp){
            ans=max(ans,a.second);
        }
        return ans;
    }
    
    void sum(Node* root,int level){
        if(!root){
            return;
        }
        
        mp[level]+=1;
        sum(root->left,level+1);
        sum(root->right,level+1);
    }
};
