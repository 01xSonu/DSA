class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int beauty;
        
        for(int i=0;i<s.length();i++){
            map<char,int>mpp;
            for(int j=i;j<s.length();j++){
                mpp[s[j]]++;
                if(mpp.size()>1){
                    int maxi=INT_MIN;
                    int mini=INT_MAX;
                    for(auto it:mpp){
                        maxi=max(maxi,it.second);
                        mini=min(mini,it.second);


                    }
                    beauty=maxi-mini;
                    sum=sum+beauty;

                }
                

            }
        }
        return sum;
        
    }
};