class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int sum)
    {
    //add code here.
        unordered_set<int> set;
        if (!findpairUtil(root, sum, set))
            return 0;
        
        return 1;
    }
    
    bool findpairUtil(struct Node *root, int sum,
                  unordered_set<int>& set)
    {
        if (root == NULL)
            return false;
     
        if (findpairUtil(root->left, sum, set))
            return true;
     
        if (set.find(sum - root->data) != set.end()) {
            return true;
        }
        else
            set.insert(root->data);
     
        return findpairUtil(root->right, sum, set);
    }
};
