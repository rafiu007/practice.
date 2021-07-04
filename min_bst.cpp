class Solution {
public:
    vector<int>ans;
    int getMinimumDifference(TreeNode* root) {
        int mini=INT_MAX;
       int res=INT_MAX;
        solve(root);
        for(int i=0;i<ans.size()-1;i++){
            res=min(res,abs(ans[i]-ans[i+1]));
        }
        return res;
    }
    void solve(TreeNode* root){
        if(!root){
            return;
        }
        
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    } 
};
