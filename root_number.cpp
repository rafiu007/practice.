class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        long long int l=0,r=x,ans=0,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(mid*mid==x){
                ans=mid;
                break;
            }
            else if(mid*mid<x){
                if(mid>=ans){
                    ans=mid;
                    l=mid+1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(mid*mid>x){
                r=mid-1;
            }
        }
        return ans;
    }
};
