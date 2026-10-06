class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums(n);
        int result;
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;

        }
        int j=nums[0];
        for(int i=1;i<n;i++){
            result=(j^nums[i]);
            j=result;
        }
        return result;
    }
    
};