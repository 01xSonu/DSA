class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=k-1,len=0;
        double maxavg=INT_MIN;
        double sum=0;
        for(int i=l;i<=r;i++){
                sum=sum+nums[i];
            }
        
        while(r<nums.size()){
            maxavg=max(maxavg,(sum/k));
            r++;
            if(r<nums.size()){
                sum=sum-nums[l];
                l++;
                sum=sum+nums[r];
            }
            
        }
        return maxavg;
        
    }
};