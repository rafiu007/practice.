class Solution {
  public:
  int ans;
  int height(Node* root)
    {
        if (root == NULL)
            return 0;
     
        int left_height = height(root->left);
     
        int right_height = height(root->right);
     
        // update the answer, because diameter of a
        // tree is nothing but maximum value of
        // (left_height + right_height + 1) for each node
        ans = max(ans, 1 + left_height + right_height);
     
        return 1 + max(left_height, right_height);
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        ans=INT_MIN;
         height(root);
         return ans;
    }
};
