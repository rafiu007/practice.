class Solution {
  public:
    int hasThreePrimeFac(long long N) {
        // code here
        if(N<=3){
            return 0;
        }
        int count=2;
        for(int i =2;i<=sqrt(N);i++){
            if(N%i==0 && i*i==N){
                count++;
            }
            if(N%i==0 && i*i<N){
                count+=2;
                break;
            }
        }
        
        if(count==3){
            return 1;
        }
        else{
            return 0;
        }
    }
};
