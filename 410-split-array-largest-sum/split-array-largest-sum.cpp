class Solution {
public:
    int sumele(vector<int>& nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        return sum;
    }
    int maxele(vector<int>& nums){
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        return maxi;

    }
    int splits(vector<int>& nums,int maxsum){
        int totalsum=nums[0];
        int split=1;
        for(int i=1;i<nums.size();i++){
            if(totalsum+nums[i]>maxsum){
                split++;
                totalsum=nums[i];
            }
            else{
                totalsum=totalsum+nums[i];
            }
        }
        return split;
    }

    int splitArray(vector<int>& nums, int k) {
        int low=maxele(nums);
        int high=sumele(nums);
        while(low<=high){
            int mid=(low+high)/2;
            int requiredsplits=splits(nums,mid);
            if(requiredsplits<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};