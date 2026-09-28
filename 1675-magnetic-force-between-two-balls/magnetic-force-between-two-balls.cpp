class Solution {
public:
    int noofBalls(vector<int>& position,int distance){
        sort(position.begin(),position.end());
        int last=position[0];
        int balls=1;
        for(int i=1;i<position.size();i++){
            if(position[i]-last>=distance){
                balls++;
                last=position[i];
            }
        }
        return balls;
    }
    int maxele(vector<int>& position){
        int maxi=INT_MIN;
        for(int i=0;i<position.size();i++){
            if(position[i]>maxi){
                maxi=position[i];
            }

        }
        return maxi;
    }
    int maxDistance(vector<int>& position, int m) {
        int low=1;
        int high=maxele(position);
        while(low<=high){
            int mid=(low+high)/2;
            int totalballs=noofBalls(position,mid);
            if(totalballs>=m){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return high;
         
        
    }
};