class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int maxsum=0;
        int p=cardPoints.size()-1;
        int r=k-1;
        int l=0;

        if(k==cardPoints.size()){
            for(int i=0;i<cardPoints.size();i++){
                sum=sum+cardPoints[i];
                
            }
            return sum;
        }
        for(int i=0;i<=r;i++){
            sum=sum+cardPoints[i];
            maxsum=max(maxsum,sum);
        }
        while(r!=-1){
            sum=sum-cardPoints[r];
            r--;
            sum=sum+cardPoints[p];
            p--;
            maxsum=max(maxsum,sum);




        }
        return maxsum;


       
        
    }
};