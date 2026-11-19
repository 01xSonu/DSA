class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlen=0;
        int len=0;
        map<char,int>mpp;
        while(r<s.length()){
           
            if(mpp.find(s[r])==mpp.end() || l>mpp[s[r]]){
                len=r-l+1;
                maxlen=max(len,maxlen);
                mpp[s[r]]=r;
                r++;
            }
            else{
                l=mpp[s[r]]+1;
                mpp[s[r]]=r;
                r++;

            }


        }
        return maxlen;
        
        


      
        
    }
};