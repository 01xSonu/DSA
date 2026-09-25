class Solution {
public:
    int maxele(vector<int>& weights){
        int maxi=INT_MIN;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>maxi){
                maxi=weights[i];
            }
        }
        return maxi;
    }
    int elesum(vector<int>& weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
        }
        return sum;
    }
    int answer(vector<int>& weights,int capacity){
        int summ=0;
        int days=1;
        for(int i=0;i<weights.size();i++){
            if(summ+weights[i]>capacity){
                days=days+1;
                summ=weights[i];
            }
            else{
                summ=summ+weights[i];
            }
            
            
        }
        return days;

        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=maxele(weights);
        int high=elesum(weights);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int y=answer(weights,mid);
            if(y<=days){
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