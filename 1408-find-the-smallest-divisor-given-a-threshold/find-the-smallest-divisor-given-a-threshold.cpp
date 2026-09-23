class Solution {
public:
    int maxele(vector<int>& nums){
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        return maxi;
    }
    int sumtotal(vector<int>& nums,int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+ceil((double)nums[i] / (double)mid);
        }
        return sum;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=maxele(nums);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int y=sumtotal(nums,mid);
            if(y<=threshold){
                ans=mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }

        }
        return ans;

    }
};