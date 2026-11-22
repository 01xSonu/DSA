class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0;
        int hash[256]={0};
        while(r<s.length()){
            hash[s[r]]++;
            maxfreq=max(maxfreq,hash[s[r]]);
            while((r-l+1)-maxfreq>k){
                hash[s[l]]--;
                maxfreq=0;
                for(int i=0;i<256;i++){
                    maxfreq=max(maxfreq,hash[i]);
                }
                l++;
                

            }
            maxlen=max(maxlen,r-l+1);
            r++;
            
        }
        return maxlen;
        
    }
};