class Solution {
public:
    int maxele(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        return maxi;
    }
    long long totalhours(vector<int>& piles,int mid){
        long long hours=0;
        for(int i=0;i<piles.size();i++){
            hours=hours+ceil((double)piles[i]/(double)mid);
        }
        return hours;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxele(piles);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            long long  TotalH=totalhours(piles,mid);
            
            if(TotalH<=h){
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