class Solution {
public:
    int minele(vector<int>& bloomDay){
        int mini=INT_MAX;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<mini){
                mini=bloomDay[i];
            }
        }
        return mini;
    }
    int maxele(vector<int>& bloomDay){
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]>maxi){
                maxi=bloomDay[i];
            }
        }
        return maxi;
    }
    bool PossibleDays(vector<int>& bloomDay,int days,int m,int k){
        int count=0;
        int noofBou=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=days){
                count++;
            }
            else{
                noofBou=noofBou+(count/k);
                count=0;

            }
        }
        noofBou=noofBou+(count/k);
        if(noofBou>=m){
            return true;
        }
        else{
            return false;
        }

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()){
            return -1;
        }
        int low=minele(bloomDay);
        int high=maxele(bloomDay);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            bool totaldays=PossibleDays(bloomDay,mid,m,k);
            if(totaldays==true){
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