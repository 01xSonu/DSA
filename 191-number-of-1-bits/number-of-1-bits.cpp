class Solution {
public:
    int hammingWeight(int n) {
        int ans;
        int count=0;
        while(n!=0){
            ans=(n&(n-1));
            n=ans;
            count++;

        }
        return count;
        

        
    }
    
};