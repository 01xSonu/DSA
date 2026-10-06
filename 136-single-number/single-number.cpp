class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        int j=nums[0];
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=1;i<nums.size();i++){
            ans=(j^nums[i]);
            j=ans;


        }
        return ans;
        
    }
};