class Solution {
public:
    vector<int> sortedArrayToBST(vector<int>& arr) {
        // Code here
        vector<int> res(arr.size(), 0);
        int index = 0;
        
        arrayToBST(arr, res, 0, arr.size() - 1, index);
        
        return res;
    }
    void arrayToBST(vector<int> &arr, vector<int> &res, int low, int high, int &index)
    {
        if(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            res[index++] = arr[mid];
            
            arrayToBST(arr, res, low, mid - 1, index);
            
            arrayToBST(arr, res, mid + 1, high, index);
        }
    }
};
