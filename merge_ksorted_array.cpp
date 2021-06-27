class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        vector<int>ans;
        int pos[k]={0};
        int all=0;
        while(all<k){
            int min=-1;
            int numi,numj;
            for(int i=0;i<k;i++){
                if(pos[i]< k && min==-1){
                    min=arr[i][pos[i]];
                    numi=i;numj=pos[i];
                    continue;
                }
                
                if(pos[i]<k && arr[i][pos[i]]<=min){
                    min=arr[i][pos[i]];
                    numi=i;numj=pos[i];
                }
            }
            ans.push_back(min);
            pos[numi]++;
            if (pos[numi]==k){
                all++;
            }
        }
        
        return ans;
    }
};
